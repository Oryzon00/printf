#include <stdio.h>
#include "printf.h"

int	main(void)
{
	char *str = "nablabla";
	int	nb = -15430;
	char c = 'a';
	int nb2 = 234567;
	unsigned int nb3 = 2147483649;

	printf("printf:\n %%\n %s\n %i\n %c \n %d\n %u\n\n", str, nb, c, nb2, nb3);
	ft_printf("ft_printf:\n %%\n %s\n %i\n %c\n %d\n %u\n", str, nb, c, nb2, nb3);
}