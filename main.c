#include <stdio.h>
#include "printf.h"

int	main(void)
{
	char *str = "nablabla";
	int	nb = -15430;
	char c = 'a';
	int nb2 = 234567;
	unsigned int nb3 = 2147483649;
	unsigned int nb4 = 1024;

	printf("printf:\n %%\n %s\n %i\n %c \n %d\n %u\n %x\n\n", str, nb, c, nb2, nb3, nb4);
	ft_printf("ft_printf:\n %%\n %s\n %i\n %c \n %d\n %u\n %x\n\n", str, nb, c, nb2, nb3, nb4);
	printf("test valeur retour ft_printf %d\n", (ft_printf("%x", 0xa5e21)));
	printf("test valeur retour printf %d\n", (printf("%x", 0xa5e21)));


}