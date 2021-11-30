#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char *str = NULL;
	int	nb = -15430;
	char c = 'a';
	int nb2 = 234567;
	unsigned int nb3 = 2147649;
	unsigned int nb4 = 12347;

	printf("printf:\n %%\n %s\n %i\n %c \n %d\n %u\n %x\n %X\n\n", str, nb, c, nb2, nb3, nb4, nb4);
	ft_printf("ft_printf:\n %%\n %s\n %i\n %c \n %d\n %u\n %x\n %X\n\n", str, nb, c, nb2, nb3, nb4, nb4);
	// printf("test valeur retour ft_printf %d\n", (ft_printf("%x", 0xa5e21)));
	// printf("test valeur retour printf %d\n", (printf("%x", 0xa5e21)));

	// printf("printf: \n %X \n %X \n\n", nb4, nb3);
	// ft_printf("ft_printf: \n %X \n %X \n\n", nb4, nb3);

	// printf("printf: \n %p \n %p\n\n", &nb3, &nb4);
	// ft_printf("ft_printf: \n %p \n %p\n\n", &nb3, &nb4);


}