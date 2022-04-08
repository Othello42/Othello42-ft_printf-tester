
#include "h_ftp_test_strings.h"

#include <stdio.h> //printf
#include <fcntl.h> //open
#include <unistd.h> //close
#include <stdlib.h> //system
#include <string.h> //strcmp

#define NAME		PRINTER
#define PTR_(NAME)	#NAME
#define PTR(NAME)	PTR_(NAME)

#include HEADER

static void	print_strings(void);
static void	print_man_multi(void);
static void	print_man_multi2(void);
static void	print_bonus_multi(void);
void		ft_error(int num);

int	main(void)
{
	signal(SIGSEGV, ft_error);
	if (TEST == 6)
		print_man_multi();
	else if (TEST == 86)
		print_man_multi2();
	else if (TEST == 233)
		print_bonus_multi();
	else
		print_strings();
}

static void	print_strings(void)
{
	int	fd;
	int	ret;

	close(open ("temp_"PTR(NAME), O_RDWR | O_TRUNC | O_CREAT, 0666));
	fd = open ("temp_"PTR(NAME)"_ret", O_RDWR | O_TRUNC | O_CREAT, 0666);
	ret = PRINTER(STRING ARGUMENTS);
	dprintf(fd, "%i", ret);
	if (!strcmp(PTR(NAME), "ft_printf"))
		system("leaks test.out | grep 'leaked' | cut -f2 -d: > temp_leak_check");
	close(fd);
}

static void	print_man_multi(void)
{
	int	ret;
	int	fd;

	ret = 0;
	ret += PRINTER("Lorem ipsum dolor sit amet, ");
	ret += PRINTER("consectetur adipiscing elit.\n");
	ret += PRINTER("Integer vitae ultricies est, ");
	ret += PRINTER("ac tincidunt odio. \n");
	ret += PRINTER("Vestibulum vitae suscipit ex. \n");
	ret += PRINTER("Vestibulum nec iaculis neque, ");
	ret += PRINTER("ac iaculis metus. \n");
	ret += PRINTER("Cras a erat purus. \n");
	ret += PRINTER("Mauris justo ante, ");
	ret += PRINTER("iaculis ac orci sit amet, ");
	ret += PRINTER("scelerisque sagittis sem. \n");
	ret += PRINTER("Aliquam rhoncus est nulla, ");
	ret += PRINTER("id luctus nibh commodo vitae. \n");
	ret += PRINTER("Donec rhoncus turpis sed justo porttitor pretium. \n");
	ret += PRINTER("Maecenas tempus ligula eu justo accumsan pellentesque. \n");
	ret += PRINTER("Duis ac ornare ex, ");
	ret += PRINTER("sed lobortis arcu. \n");
	ret += PRINTER("Nunc est arcu, ");
	ret += PRINTER("dictum eu eros vel, ");
	ret += PRINTER("congue tempor eros. \n");
	ret += PRINTER("Etiam ut justo tincidunt, ");
	ret += PRINTER("tempor nunc ut, ");
	ret += PRINTER("tristique mi.");
	fd = open ("temp_"PTR(NAME)"_ret", O_RDWR | O_TRUNC | O_CREAT, 0666);
	dprintf(fd, "%i", ret);
	if (!strcmp(PTR(NAME), "ft_printf"))
		system("leaks test.out | grep 'leaked' | cut -f2 -d: > temp_leak_check");
	close (fd);
}

static void	print_man_multi2(void)
{
	int	ret;
	int	fd;

	ret = 0;
	ret += PRINTER("%corem %cpsum %color %cit %cmet, "	, 'L', 'i', 'd', 's', 'a');
	ret += PRINTER("consectetur %s elit.\n"				, "adipiscing");
	ret += PRINTER("Integer vitae %pricies est, "		, (void *)1);
	ret += PRINTER("%dc %dnc%ddun%d %dd%d. \n"			, 4, 71, 1, 7, 0, 10);
	ret += PRINTER("V%ibulum v%i %iu%ic%ip%i %ix. \n"	, 3571, 1743, 5, 5, 1, 17, 3);
	ret += PRINTER("V%ubulum n%uc %ucul%u n%uqu%u, "	, 3751, 3, 14, 15, 3, 3);
	ret += PRINTER("%x i%xulis m%xtus. \n"				, 172, 172, 14);
	ret += PRINTER("%Xras a erat purus. \n"				, 12);
	fd = open ("temp_"PTR(NAME)"_ret", O_RDWR | O_TRUNC | O_CREAT, 0666);
	dprintf(fd, "%i", ret);
	if (!strcmp(PTR(NAME), "ft_printf"))
		system("leaks test.out | grep 'leaked' | cut -f2 -d: > temp_leak_check");
	close (fd);
}

static void	print_bonus_multi(void)
{
	int	ret;
	int	fd;

	ret = 0;
	ret += PRINTER("[%-11c]\t[%-11c]\n", 42, 42);
	ret += PRINTER("[%-11.5s]\t[%-11.5s]\n", "Lorem Ipsum", "ipsum dolor sit amet");
	ret += PRINTER("[%-11p]\t[%-11p]\n", (void *)42, (void *)42);
	ret += PRINTER("[%-+11.5d]\t[%+-11.5d]\t[%0 11.5d]\t[% 011.5d]\n", 42, 42, 42, 42);
	ret += PRINTER("[%-+11.5i]\t[%+-11.5i]\t[%0 11.5i]\t[% 011.5i]\n", 42, 42, 42, 42);
	ret += PRINTER("[%-11.5u]\t[%-11.5u]\t[%011.5u]\t[%011.5u]\n", 42, 42, 42, 42);
	ret += PRINTER("[%#-11.5x]\t[%-#11.5x]\t[%#011.5x]\t[%0#11.5x]\n", 42, 42, 42, 42);
	ret += PRINTER("[%#-11.5X]\t[%-#11.5X]\t[%#011.5X]\t[%0#11.5X]\n", 42, 42, 42, 42);
	fd = open ("temp_"PTR(NAME)"_ret", O_RDWR | O_TRUNC | O_CREAT, 0666);
	dprintf(fd, "%i", ret);
	if (!strcmp(PTR(NAME), "ft_printf"))
		system("leaks test.out | grep 'leaked' | cut -f2 -d: > temp_leak_check");
	close (fd);
}
