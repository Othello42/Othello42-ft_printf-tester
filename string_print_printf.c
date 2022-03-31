#include "h_test_strings.h"
#include "h_colors.h"

#include <stdio.h> //printf
#include <fcntl.h> //open
#include <unistd.h> //close
#include <stdlib.h> //system

#include LIB

void	print_strings(void);

int	main(void)
{
	print_strings();
}

void	print_strings(void)
{
	int	fd_printf;
	int	fd_printf_ret;
	int	ret;

	fd_printf = open ("temp_printf", O_RDWR | O_TRUNC | O_CREAT, 0666);
	fd_printf_ret = open ("temp_printf_ret", O_RDWR | O_TRUNC | O_CREAT, 0666);
	ret = printf(STRING ARGUMENTS);
	dprintf(fd_printf_ret, "%i", ret);
	// system("leaks a.out | grep 'leaked' | cut -f2 -d: > temp_leak_check");
	close(fd_printf);
	close(fd_printf_ret);
}
