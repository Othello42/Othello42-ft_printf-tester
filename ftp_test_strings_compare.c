
#include "h_ftp_test_functions.h"
#include "h_ftp_test_strings.h"
#include "h_colors.h"

static void	memory_compare(char *ft, char *comp, char *ret_ft, char *ret_comp, char *leaks);

#include <string.h> //strcmp
#include <stdlib.h> //free
#include <stdio.h> //printf

int	main(void)
{
	string_compare();
}

void	string_compare(void)
{
	char	*buff_ft;
	char	*buff_comp;
	char	*ret_ft;
	char	*ret_comp;
	char	*leaks;

	buff_ft = read_file("temp_ft_printf", 0xffff);
	buff_comp = read_file("temp_printf", 0xffff);
	ret_ft = read_file("temp_ft_printf_ret", 12);
	ret_comp = read_file("temp_printf_ret", 12);
	leaks = read_file("temp_leak_check", 0xffff);
	memory_compare(buff_ft, buff_comp, ret_ft, ret_comp, leaks);
	free(ret_comp);
	free(ret_ft);
	free(buff_ft);
	free(buff_comp);
	free(leaks);
}

static void	memory_compare(char *ft, char *comp, char *ret_ft, char *ret_comp, char *leaks)
{
	int		val_ft;
	int		val_comp;

	val_ft = atoi(ret_ft);
	val_comp = atoi(ret_comp);
	if (is_undefined_behavior())
		printf(C_YELLOW);
	else
		printf(C_RED);
	if (strcmp(ft, comp))
	{
		printf("[KO]"C_RESET" ");
		print_error(ft, comp, val_ft, val_comp);
	}
	else if (val_ft != val_comp)
	{
		printf("[#KO]"C_RESET" ");
		print_error(ft, comp, val_ft, val_comp);
	}
	else if (strcmp(leaks, " 0 leaks for 0 total leaked bytes.\n"))
		printf(C_ORANGE"[LK]"C_RESET" ");
	else
		printf(C_OK"[OK]"C_RESET" ");
}
