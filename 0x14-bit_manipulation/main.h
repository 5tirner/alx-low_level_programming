#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

unsigned int	binary_to_uint(const char *b);
void		print_binary(unsigned long int n);
void		_pc(int c);
int		get_bit(unsigned long int n, unsigned int index);

#endif