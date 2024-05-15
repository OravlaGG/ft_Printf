/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:20:03 by alvargom          #+#    #+#             */
/*   Updated: 2024/05/13 10:22:52 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(const char conver, va_list argp)
{
	int	c;

	c = 0;
	if (conver == 'c')
		c += ft_putchr_pf(va_arg(argp, int));
	else if (conver == 's')
		c += ft_putstr_pf(va_arg(argp, char *));
	else if (conver == 'p')
		c += ft_putptr_pf(va_arg(argp, unsigned long));
	else if (conver == 'x')
		c += ft_putnum_pf((long)va_arg(argp, unsigned int), 16, conver);
	else if (conver == 'X')
		c += ft_putnum_pf((long)va_arg(argp, unsigned int), 16, conver);
	else if (conver == 'd' || conver == 'i')
		c += ft_putnum_pf((long)va_arg(argp, int), 10, conver);
	else if (conver == 'u')
		c += ft_putuns_pf(va_arg(argp, unsigned int));
	else
		c += write(1, &conver, 1);
	return (c);
}

int	ft_printf(char const *str, ...)
{
	va_list	argp;
	int		c;

	va_start(argp, str);
	c = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			c += ft_format(*str, argp);
		}
		else
			c += ft_putchr_pf(*str);
		str++;
	}
	va_end(argp);
	return (c);
}
/*
#include <stdio.h>
int main()
{
	printf("%d", 5);
	ft_printf("%d", 5);
	return (0);	
}
*/