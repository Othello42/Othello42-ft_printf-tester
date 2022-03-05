#include "h_colors.h"

#include <stdio.h> //printf
#include <fcntl.h> //open
#include <unistd.h> //closes

#if TEST >= 0 && TEST < 100
# define NAMESIZE "%-14s" 
#else
# define NAMESIZE "%-16s"
#endif

int	main(void)
{
	if (FRAME == 1)
	{
		printf("\n\t"C_HEADER" Othello's ft_printf Tester "C_RESET"\n\n");
		printf(C_BOLD"\tLegend"C_RESET"\n");
		printf(C_GREEN"[OK]"C_RESET"\tTest checks out.\n");
		printf(C_RED"[KO]"C_RESET"\tTest has failed on basic functionality.\n");
		printf(C_RED"[#KO]"C_RESET"\tTest gave incorrect return value.\n");
		printf(C_DGREY"[KO]"C_RESET"\tTest failed to execute.\n");
		printf("\n");
		printf(C_ORANGE"[L"C_BLUE"K]"C_RESET"\tFunction "C_ORANGE"does"C_RESET"/"C_BLUE"doesn't"C_RESET" contain leaks at some point.\n");
		printf("\n");
		printf("Read "C_BLUE"errorlog.txt"C_RESET" for more information.\n");
		close(open("errorlog.txt", O_CREAT | O_TRUNC));
	}
	if (FRAME == 2)
		printf(C_BOLD"\n\tMandatory"C_RESET" ");
	if (FRAME == 3)
		printf(C_BOLD"\n\n\tBonus"C_RESET"\n");
	if (TEST == 1)
		printf(C_BOLD"\n"NAMESIZE C_RESET"\t\t",		"Basic Write");
	if (TEST == 5)
		printf(C_BOLD"\n"NAMESIZE"%% c"C_RESET"\t",	"Character");
	if (TEST == 8)
		printf(C_BOLD"\n"NAMESIZE"%% s"C_RESET"\t",	"String");
	if (TEST == 13)
		printf(C_BOLD"\n"NAMESIZE"%% p"C_RESET"\t",		"Address");
	if (TEST == 24)
		printf(C_BOLD"\n"NAMESIZE"%% d"C_RESET"\t",		"Decimal");
	if (TEST == 35)
		printf(C_BOLD"\n"NAMESIZE"%% i"C_RESET"\t",		"Integer");
	if (TEST == 44)
		printf(C_BOLD"\n"NAMESIZE"%% u"C_RESET"\t",		"Unsigned Dec");
	if (TEST == 52)
		printf(C_BOLD"\n"NAMESIZE"%% x"C_RESET"\t",		"Lowercase Hex");
	if (TEST == 62)
		printf(C_BOLD"\n"NAMESIZE"%% X"C_RESET"\t",		"Uppercase Hex");
	if (TEST == 72)
		printf(C_BOLD"\n"NAMESIZE"%% %%"C_RESET"\t",	"%%");
	if (TEST == 74)
		printf(C_BOLD"\n"NAMESIZE C_RESET"\t\t",		"Miscelaneous");
	// if (TEST == 110 || TEST == 119)
	// 	printf(C_BOLD"\n"NAMESIZE"all"C_RESET"\t",	"");
	if (TEST == 100)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ",	"Left Alligned:");
	if (TEST == 100)
		printf(C_BOLD" %%-#c"C_RESET" ");
	if (TEST == 102)
		printf(C_BOLD" %%-#s"C_RESET" ");
	if (TEST == 105)
		printf(C_BOLD" %%-#i"C_RESET" ");
	if (TEST == 108)
		printf(C_BOLD" all"C_RESET" ");
	if (TEST == 109)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ",	"Zero Padded:");
	if (TEST == 109)
		printf(C_BOLD" %%0#i"C_RESET" ");
	if (TEST == 113)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ",	"Max Field Width:");
	if (TEST == 113)
		printf(C_BOLD" %%.#s"C_RESET" ");
	if (TEST == 118)
		printf(C_BOLD" %%.#i"C_RESET" ");
	if (TEST == 120)
		printf(C_BOLD"\n\n"NAMESIZE C_RESET" ",	"Min Field Width:");
	if (TEST == 120)
		printf(C_BOLD" %%#c"C_RESET" ");
	if (TEST == 123)
		printf(C_BOLD" %%#s"C_RESET" ");
	if (TEST == 126)
		printf(C_BOLD" %%#i"C_RESET" ");
	if (TEST == 130)
		printf(C_BOLD" all"C_RESET" ");
	if (TEST == 131)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ",	"Space:");
	if (TEST == 136)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ",	"Show Positive:");
	if (TEST == 138)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ",	"Min & Max Field:");
	if (TEST == 146)
		printf(C_BOLD"\n"NAMESIZE C_RESET" ",	"Combinations:");
}
