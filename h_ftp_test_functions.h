
#ifndef H_TEST_FUNCTIONS_H
# define H_TEST_FUNCTIONS_H

void	string_compare(void);

char	*read_file(char *file, int size);
int		is_undefined_behavior(void);
void	print_error(char *ft, char *comp, int val_ft, int val_comp);
void	ft_error(int num);

#endif