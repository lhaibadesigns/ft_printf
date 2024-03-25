
#include "ft_printf.h"

static int	ft_put_add_hexa(unsigned long int num)
{
	int		j;
	char	*base;

	base = "0123456789abcdef";
	j = 0;
	if (num >= 16)
		j += ft_put_add_hexa(num / 16);
	j += ft_putchar(base[num % 16]);
	return (j);
}

int	ft_put_add(void *ptr)
{
	int					j;
	unsigned long int	nbr;

	nbr = (unsigned long int)ptr;
	j = 0;
	j += ft_putstr("0x");
	j += ft_put_add_hexa(nbr);
	return (j);
}
