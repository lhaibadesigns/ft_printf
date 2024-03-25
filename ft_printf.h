/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-haib <ael-haib@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 03:13:47 by ael-haib          #+#    #+#             */
/*   Updated: 2024/03/25 03:14:28 by ael-haib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_putstr(char *s);
int	ft_putchar(int c);
int	ft_putnbr(int i);
int	ft_put_unsigned_nbr(unsigned int i);
int	ft_put_hexa_base(unsigned int num, char formatter);
int	ft_put_add(void *ptr);
int	ft_checker(char c, va_list ptr);

#endif
