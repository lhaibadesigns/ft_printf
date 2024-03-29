/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 03:13:54 by ael-haib          #+#    #+#             */
/*   Updated: 2024/03/29 11:20:40 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
