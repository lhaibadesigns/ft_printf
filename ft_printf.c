/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 03:13:44 by ael-haib          #+#    #+#             */
/*   Updated: 2024/03/29 11:20:59 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		j;
	int		i;
	va_list	ptr;

	j = 0;
	i = 0;
	va_start(ptr, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (!str[i + 1])
				return (j);
			j += ft_checker(str[++i], ptr);
		}
		else
			j += ft_putchar(str[i]);
		i++;
	}
	va_end(ptr);
	return (j);
}
