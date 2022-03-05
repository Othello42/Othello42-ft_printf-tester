#include "h_test_strings.h"

void		string_compare(void);
static void	read_file(char *buff, char *file, int size);
static void print_error(char *ft, char *comp, int val_ft, int val_comp);
static void	memory_compare(char *ft, char *comp, int val_ft, int val_comp);
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
	int		val_ft;
	int		val_comp;

	buff_ft = (char *)calloc(sizeof(char), 0xffff);
	buff_comp = (char *)calloc(sizeof(char), 0xffff);
	ret_ft = (char *)calloc(sizeof(char), 12);
	ret_comp = (char *)calloc(sizeof(char), 12);
	read_file(buff_ft, "temp_ft_printf", 0xffff);
	read_file(buff_comp, "temp_dprintf", 0xffff);
	read_file(ret_ft, "temp_ft_printf_ret", 12);
	read_file(ret_comp, "temp_dprintf_ret", 12);
	val_ft = atoi(ret_ft);
	// printf("\n%s/%i\n", ret_ft, val_ft);
	free(ret_ft);
	val_comp = atoi(ret_comp);
	// printf("%s/%i\n", ret_comp, val_comp);
	free(ret_comp);
	memory_compare(buff_ft, buff_comp, val_ft, val_comp);
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

static void	memory_compare(char *ft, char *comp, int val_ft, int val_comp)
{
	if (strcmp(ft, comp) != 0)
	{
		printf(C_RED"[KO]"C_RESET" ");
		print_error(ft, comp, val_ft, val_comp);
	}
	else if (val_ft != val_comp)
	{
		printf(C_RED"[#KO]"C_RESET" ");
		print_error(ft, comp, val_ft, val_comp);
	}
	else
		printf(C_GREEN"[OK]"C_RESET" ");
}

static void	print_error(char *ft, char *comp, int val_ft, int val_comp)
{
	int	fd_err;

	fd_err = errorlog_fd(1);
	dprintf(fd_err, "======= Error in Test %i =======\n", TEST);
	dprintf(fd_err, "STRING:\t%s\n\n", STRING);
	dprintf(fd_err, "printf(%i):\t\t'%s'\n", val_comp, comp);
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
