#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

typedef unsigned int t_bool;

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);	

#define TRUE 1
#define FALSE 0
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguements.\n"
#define SUCCESS 0
#define EVEN(nbr) ((nbr) % (2) ? (FALSE) : (TRUE))

#endif