#include "h_colors.h"

#include <stdio.h> //printf
#include <fcntl.h> //open
#include <unistd.h> //closes
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
	if (TEST == 6)
		printf(C_BOLD"\n"NAMESIZE"%%c"C_RESET"\t",		"Character");
	if (TEST == 10)
		printf(C_BOLD"\n"NAMESIZE"%%s"C_RESET"\t",		"String");
	if (TEST == 18)
		printf(C_BOLD"\n"NAMESIZE"%%p"C_RESET"\t",		"Address");
	if (TEST == 29)
		printf(C_BOLD"\n"NAMESIZE"%%d"C_RESET"\t",		"Decimal");
	if (TEST == 39)
		printf(C_BOLD"\n"NAMESIZE"%%i"C_RESET"\t",		"Integer");
	if (TEST == 49)
		printf(C_BOLD"\n"NAMESIZE"%%u"C_RESET"\t",		"Unsigned Dec");
	if (TEST == 59)
		printf(C_BOLD"\n"NAMESIZE"%%x"C_RESET"\t",		"Lowercase Hex");
	if (TEST == 69)
		printf(C_BOLD"\n"NAMESIZE"%%X"C_RESET"\t",		"Uppercase Hex");
	if (TEST == 79)
		printf(C_BOLD"\n"NAMESIZE"%%%%"C_RESET"\t",		"%%");
	if (TEST == 83)
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
	if (TEST == 108)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 117)
		printf(C_BOLD"\n%s"C_RESET" ",			"Left Adjusted:");
	if (TEST == 117)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%-[#]c");
	if (TEST == 120)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%-[#]s");
	if (TEST == 123)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%-[#]i");
	if (TEST == 127)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 136)
		printf(C_BOLD"\n%s"C_RESET" ",			"Field Width:");
	if (TEST == 136)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%[#]c");
	if (TEST == 139)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%[#]s");
	if (TEST == 142)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%[#]i");
	if (TEST == 145)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 154)
		printf(C_BOLD"\n%s"C_RESET" ",			".Precision:");
	if (TEST == 154)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%.[#]s");
	if (TEST == 160)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%.[#]i");
	if (TEST == 169)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%.[#]c");
	if (TEST == 175)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 182)
		printf(C_BOLD"\n%s"C_RESET" ",			"Combinations:");
	if (TEST == 182)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%0-[#].[#]");
	if (TEST == 190)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "");
/* ====================================||==================================== *\
\* ==============ft_printf=============||==============©Othello============== */
	if (TEST == 198)
		printf(C_BOLD"\n\n"NAMESIZE"  # +"C_RESET" ", "Bonus Part 2:");
	if (TEST == 198)
		printf(C_BOLD"\n%s"C_RESET" ",			"Alternate Form:");
	if (TEST == 198)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%#x");
	if (TEST == 201)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%#X");
	if (TEST == 204)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "all");
	if (TEST == 206)
		printf(C_BOLD"\n%s"C_RESET" ",			"Spaced:");
	if (TEST == 206)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "% %");
	if (TEST == 215)
		printf(C_BOLD"\n%s"C_RESET" ",			"Signed:");
	if (TEST == 215)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%+");
	if (TEST == 222)
		printf(C_BOLD"\n%s"C_RESET" ",			"Combinations:");
	if (TEST == 222)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%# +");
	if (TEST == 230)
		printf(C_BOLD"\n\n"NAMESIZE C_RESET" ", "Full Bonus");
	if (TEST == 230)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "%#0- +[#].[#]");
	if (TEST == 238)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "");
	if (TEST == 246)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ", "");
}
