
#include "ft_printf.h"

int	ft_put_unsigned_nbr(unsigned int i)
{
	unsigned int	nbr;
	int				j;

	nbr = i;
	j = 0;
	if (i > 9)
	{
		j += ft_put_unsigned_nbr(nbr / 10);
		j += ft_putchar((nbr % 10) + '0');
	}
	else
		j += ft_putchar(nbr + '0');
	return (j);
}
