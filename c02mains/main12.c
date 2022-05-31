#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int main()
{
	ft_print_memory("Bonjour les amin", 4);
	ft_print_memory("ches...c est fo", 4);
	ft_print_memory("u.tout.ce qu on", 4);
	ft_print_memory("peut faire avec.", 4);
	ft_print_memory("..print_memory\n\n", 4);
	ft_print_memory("..lol.lol. .", 4);
}