#include "h_test_strings.h"

void		string_compare(void);
static void	read_file(char *buff, char *file, int size);
static void print_error(char *ft, char *comp, int val_ft, int val_comp);
static int	is_undefined_behavior(void);
static void	memory_compare(char *ft, char *comp, int val_ft, int val_comp, char *leaks);
int	errorlog_fd(int command);

#include <fcntl.h> //open
#include <unistd.h> //read, close
#include <stddef.h> //size_t
#include <stdlib.h> //calloc
#include <string.h> //strcmp

#include <stdio.h> //printf

#include "h_colors.h"

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
	int		val_ft;
	int		val_comp;

	buff_ft = (char *)calloc(sizeof(char), 0xffff);
	buff_comp = (char *)calloc(sizeof(char), 0xffff);
	ret_ft = (char *)calloc(sizeof(char), 12);
	ret_comp = (char *)calloc(sizeof(char), 12);
	leaks = (char *)calloc(sizeof(char), 0xffff);
	read_file(buff_ft, "temp_ft_printf", 0xffff);
	read_file(buff_comp, "temp_printf", 0xffff);
	read_file(ret_ft, "temp_ft_printf_ret", 12);
	read_file(ret_comp, "temp_printf_ret", 12);
	read_file(leaks, "temp_leak_check", 0xffff);
	val_ft = atoi(ret_ft);
	free(ret_ft);
	val_comp = atoi(ret_comp);
	free(ret_comp);
	memory_compare(buff_ft, buff_comp, val_ft, val_comp, leaks);
	free(buff_ft);
	free(buff_comp);
}

static void	read_file(char *buff, char *file, int size)
{
	int	fd;

	fd = open(file, O_RDONLY);
	read(fd, buff, size);
	close(fd);
}

static void	memory_compare(char *ft, char *comp, int val_ft, int val_comp, char *leaks)
{
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
		printf(C_GREEN"[OK]"C_RESET" ");
}

static int	is_undefined_behavior(void)
{
	if (TEST >= 114 && TEST <= 116) //0padded %0p %0s %0c
		return (1);
	if ((TEST >= 169 && TEST <= 174) || TEST == 180) //.Precision %.[#]c %.[#]p
		return (1);
	if (TEST >= 190 && TEST <= 197) //bad combo's
		return (1);
	if (TEST == 205) //Alternate form %#[cspdiu]
		return (1);
	if (TEST >= 211 && TEST <= 214) //spaced % [cspuxX]
		return (1);
	if (TEST >= 219 && TEST <= 221) //signed %+[uxX]
		return (1);
	if (TEST >= 222 && TEST <= 229) //combinations
		return (1);
	if (TEST >= 238 && TEST <= 253) //full combinations
		return (1);
	return (0);
}

static void	print_error(char *ft, char *comp, int val_ft, int val_comp)
{
	int	fd_err;

	fd_err = errorlog_fd(1);
	dprintf(fd_err, "======= Error in Test %i =======\n", TEST);
	dprintf(fd_err, "%-13s\t%s\n\n", "STRING:", STRING);
	dprintf(fd_err, "printf(%i):%3s\t'%s'\n", val_comp, "", comp);
	dprintf(fd_err, "ft_printf(%i):\t'%s'\n\n\n", val_ft, ft);
}

int	errorlog_fd(int command)
{
	static int	errorfd = 0;

	if (command == 1)
	{
		if (errorfd == 0)
			errorfd = open("errorlog.txt", O_APPEND | O_RDWR);
	}
	else
		close(errorfd);
	return (errorfd);
}
