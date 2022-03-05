#include "h_test_strings.h"
#include "h_colors.h"

#include <stdio.h> //printf
#include <fcntl.h> //open
#include <unistd.h> //close

int	ft_printf(const char *str, ...);
void	print_strings(void);

int	main(void)
{
	print_strings();
}

void	print_strings(void)
{
	int	fd_dprintf;
	int	fd_ft_printf;
	int	fd_dprintf_ret;
	int	fd_ft_printf_ret;
	int	ret_d;
	int	ret_ft;

	fd_dprintf = open ("temp_dprintf", O_RDWR | O_TRUNC | O_CREAT, 0666);
	fd_ft_printf = open ("temp_ft_printf", O_RDWR | O_TRUNC | O_CREAT, 0666);
	fd_dprintf_ret = open ("temp_dprintf_ret", O_RDWR | O_TRUNC | O_CREAT, 0666);
	fd_ft_printf_ret = open ("temp_ft_printf_ret", O_RDWR | O_TRUNC | O_CREAT, 0666);
	ret_ft = ft_printf(STRING ARGUMENTS);
	ret_d = dprintf(fd_dprintf, STRING ARGUMENTS);
	dprintf(fd_dprintf_ret, "%i", ret_d);
	dprintf(fd_ft_printf_ret, "%i", ret_ft);
	close(fd_dprintf);
	close(fd_ft_printf);
	close(fd_dprintf_ret);
	close(fd_ft_printf_ret);
}
