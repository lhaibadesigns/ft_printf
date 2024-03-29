/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexa_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 03:13:51 by ael-haib          #+#    #+#             */
/*   Updated: 2024/03/29 11:20:34 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_hexa_base(unsigned int num, char formatter)
{
	int		j;
	char	*base;

	base = "";
	if (formatter == 'x')
		base = "0123456789abcdef";
	else if (formatter == 'X')
		base = "0123456789ABCDEF";
	j = 0;
	if (num >= 16)
		j += ft_put_hexa_base(num / 16, formatter);
	j += ft_putchar(base[num % 16]);
	return (j);
}
