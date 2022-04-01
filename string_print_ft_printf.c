#include "h_test_strings.h"
#include "h_colors.h"

#include <stdio.h> //printf
#include <fcntl.h> //open
#include <unistd.h> //close
#include <stdlib.h> //system

#include HEADER

void	print_strings(void);

int	main(void)
{
	print_strings();
}

void	print_strings(void)
{
	int	fd_ft_printf;
	int	fd_ft_printf_ret;
	int	ret;

	fd_ft_printf = open ("temp_ft_printf", O_RDWR | O_TRUNC | O_CREAT, 0666);
	fd_ft_printf_ret = open ("temp_ft_printf_ret", O_RDWR | O_TRUNC | O_CREAT, 0666);
	ret = ft_printf(STRING ARGUMENTS);
	dprintf(fd_ft_printf_ret, "%i", ret);
	system("leaks test.out | grep 'leaked' | cut -f2 -d: > temp_leak_check");
	close(fd_ft_printf);
	close(fd_ft_printf_ret);
}
