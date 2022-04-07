
#include "h_colors.h"

#include <stdio.h> //printf
#include <fcntl.h> //open
#include <unistd.h> //close
#include <stdlib.h>  //system

#if TEST >= 0 && TEST < 100
# define NAMESIZE "%-16s" 
#else
# define NAMESIZE "%16s"
#endif

int	main(void)
{
	if (FRAME == 1)
	{
		printf("\n\t"C_HEADER" Othello's ft_printf Tester "C_RESET"\n\n");
		printf(C_BOLD"\tLegend"C_RESET"\n");
		printf(C_OK"[OK]"C_RESET"\tTest checks out.\n");
		printf(C_RED"[KO]"C_RESET"\tTest has failed on basic functionality.\n");
		printf(C_RED"[#KO]"C_RESET"\tTest gave incorrect return value.\n");
		printf(C_YELLOW"[KO]"C_RESET"\tTest failed on undefined behavior. This is fine.\n");
		printf(C_DGRAY"[KO]"C_RESET"\tTest failed to execute.\n");
		printf("\n");
		printf(C_ORANGE"[LK]"C_RESET"\tFunction contains leaks at some point.\n");
		printf("\n");
		printf("Read "C_BLUE"errorlog.txt"C_RESET" for more information.\n");
		close(open("errorlog.txt", O_TRUNC | O_CREAT, 0666));
	}
	if (FRAME == 1)
	{
		int grep;

		grep = 0;
		printf(C_BOLD"\tN");
		fflush(NULL);
		system("norminette -v | cut -c 2-99");
		printf(C_RED);
		fflush(NULL);
		grep = system("norminette "PROJECT" | grep Error");
		if (grep != 0)
			printf(C_GREEN"[OK]"C_RESET);
		printf(C_RESET"\n");
	}
	if (FRAME == 2)
		printf("\n\t"C_SUBHEAD"Mandatory "C_RESET" ");
	if (FRAME == 3)
		printf(C_BOLD"\n\n\t"C_SUBHEAD"Bonus "C_RESET"\n");
/* ====================================||==================================== *\
||																			  ||
||								   MANDATORY								  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
	if (TEST == 1)
		printf(C_BOLD"\n"NAMESIZE C_RESET"\t",			"Basic Write");
	if (TEST == 7)
		printf(C_BOLD"\n"NAMESIZE"%%c"C_RESET"\t",		"Character");
	if (TEST == 11)
		printf(C_BOLD"\n"NAMESIZE"%%s"C_RESET"\t",		"String");
	if (TEST == 19)
		printf(C_BOLD"\n"NAMESIZE"%%p"C_RESET"\t",		"Address");
	if (TEST == 30)
		printf(C_BOLD"\n"NAMESIZE"%%d"C_RESET"\t",		"Decimal");
	if (TEST == 40)
		printf(C_BOLD"\n"NAMESIZE"%%i"C_RESET"\t",		"Integer");
	if (TEST == 50)
		printf(C_BOLD"\n"NAMESIZE"%%u"C_RESET"\t",		"Unsigned Dec");
	if (TEST == 60)
		printf(C_BOLD"\n"NAMESIZE"%%x"C_RESET"\t",		"Lowercase Hex");
	if (TEST == 70)
		printf(C_BOLD"\n"NAMESIZE"%%X"C_RESET"\t",		"Uppercase Hex");
	if (TEST == 80)
		printf(C_BOLD"\n"NAMESIZE"%%%%"C_RESET"\t",		"%%");
	if (TEST == 84)
		printf(C_BOLD"\n"NAMESIZE C_RESET"\t",			"Miscelaneous");
/* ====================================||==================================== *\
||																			  ||
||									 BONUS									  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */
	if (TEST == 100)
		printf(C_BOLD"\n"NAMESIZE"  0-[width][.precision]"C_RESET" ", "Bonus Part 1:");
	if (TEST == 100)
		printf(C_BOLD"\n%s"C_RESET" ",			"Zero Padded:");
	if (TEST == 100)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%0i");
	if (TEST == 106)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 115)
		printf(C_BOLD"\n%s"C_RESET" ",			"Left Adjusted:");
	if (TEST == 115)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%-[#]c");
	if (TEST == 118)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%-[#]s");
	if (TEST == 121)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%-[#]i");
	if (TEST == 125)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 133)
		printf(C_BOLD"\n%s"C_RESET" ",			"Field Width:");
	if (TEST == 133)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%[#]c");
	if (TEST == 136)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%[#]s");
	if (TEST == 139)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%[#]i");
	if (TEST == 142)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 151)
		printf(C_BOLD"\n%s"C_RESET" ",			".Precision:");
	if (TEST == 151)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%.[#]s");
	if (TEST == 157)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%.[#]i");
	if (TEST == 164)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%.[#]c");
	if (TEST == 170)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 177)
		printf(C_BOLD"\n%s"C_RESET" ",			"Combinations:");
	if (TEST == 177)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%0-[#].[#]");
	if (TEST == 185)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "");
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
	if (TEST == 193)
		printf(C_BOLD"\n\n"NAMESIZE"  # +"C_RESET" ", "Bonus Part 2:");
	if (TEST == 193)
		printf(C_BOLD"\n%s"C_RESET" ",			"Alternate Form:");
	if (TEST == 193)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%#x");
	if (TEST == 196)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%#X");
	if (TEST == 199)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 201)
		printf(C_BOLD"\n%s"C_RESET" ",			"Spaced:");
	if (TEST == 201)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "% %");
	if (TEST == 210)
		printf(C_BOLD"\n%s"C_RESET" ",			"Signed:");
	if (TEST == 210)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%+");
	if (TEST == 217)
		printf(C_BOLD"\n%s"C_RESET" ",			"Combinations:");
	if (TEST == 217)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%# +");
	if (TEST == 225)
		printf(C_BOLD"\n\n"NAMESIZE C_RESET" ", "Full Bonus");
	if (TEST == 225)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%#0- +[#].[#]");
	if (TEST == 234)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "");
	if (TEST == 242)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "");
}
