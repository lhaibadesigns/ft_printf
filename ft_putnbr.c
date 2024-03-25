/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 03:13:59 by ael-haib          #+#    #+#             */
/*   Updated: 2024/03/25 03:14:15 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int i)
{
	long	nbr;
	int		j;

	j = 0;
	nbr = i;
	if (nbr < 0)
	{
		nbr = -nbr;
		j += ft_putchar('-');
	}
	if (nbr > 9)
	{
		j += ft_putnbr(nbr / 10);
		j += ft_putchar((nbr % 10) + '0');
	}
	else
		j += ft_putchar(nbr + '0');
	return (j);
}
