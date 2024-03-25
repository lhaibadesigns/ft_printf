

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (!s)
	{
		return (j += ft_putstr("(null)"));
	}
	while (s[i])
	{
		j += ft_putchar(s[i]);
		i++;
	}
	return (j);
}
