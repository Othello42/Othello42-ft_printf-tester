
#include "h_ftp_test_functions.h"
#include "h_ftp_test_strings.h"
#include "h_colors.h"

#include <fcntl.h> //open
#include <unistd.h> //read, close
#include <stdlib.h> //calloc
#include <stdio.h> //printf

/* ====================================||==================================== *\
||																			  ||
||																			  ||
||							   Reading temp files							  ||
||																			  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

char	*read_file(char *file, int size)
{
	char	*buff;
	int		fd;

	buff = (char *)calloc(sizeof(char), size);
	if (buff != NULL)
	{
		fd = open(file, O_RDONLY);
		read(fd, buff, size);
		close(fd);
	}
	return (buff);
}

/* ====================================||==================================== *\
||																			  ||
||																			  ||
||					  Define tests with undefined behavior					  ||
||																			  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

int	is_undefined_behavior(void)
{
	if (TEST >= 112 && TEST <= 114) //0padded %0p %0s %0c
		return (1);
	if ((TEST >= 164 && TEST <= 169) || TEST == 175) //.Precision %.[#]c %.[#]p
		return (1);
	if (TEST >= 185 && TEST <= 192) //bad combo's
		return (1);
	if (TEST == 200) //Alternate form %#[cspdiu]
		return (1);
	if (TEST >= 206 && TEST <= 209) //spaced % [cspuxX]
		return (1);
	if (TEST >= 214 && TEST <= 216) //signed %+[uxX]
		return (1);
	if (TEST >= 217 && TEST <= 224) //combinations
		return (1);
	if (TEST >= 234 && TEST <= 249) //full combinations
		return (1);
	return (0);
}

/* ====================================||==================================== *\
||																			  ||
||																			  ||
||									Errorlog								  ||
||																			  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

static int	errorlog_fd(int command);

void	print_error(char *ft, char *comp, int val_ft, int val_comp)
{
	int	fd_err;

	fd_err = errorlog_fd(1);
	dprintf(fd_err, "======= Error in Test %i =======\n", TEST);
	dprintf(fd_err, "%-13s\t%s\n\n", "STRING:", STRING);
	dprintf(fd_err, "printf(%i):%3s\t'%s'\n", val_comp, "", comp);
	dprintf(fd_err, "ft_printf(%i):\t'%s'\n\n\n", val_ft, ft);
	errorlog_fd(0);
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

/* ====================================||==================================== *\
||																			  ||
||																			  ||
||								Error protection							  ||
||																			  ||
||																			  ||
\* ==============ft_printf=============||==============©Othello============== */

void	ft_error(int num)
{
	if (num == 11)
		printf(C_RED"[SIGSEGV]"C_RESET" ");
	exit (0);
}
