/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 10:00:13 by alvargom          #+#    #+#             */
/*   Updated: 2024/05/07 14:44:27 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_writepointer_pf(unsigned long long int n)
{
	int		c;
	char	*symb;

	symb = "0123456789abcdef";
	c = 0;
	if (n < 16)
		return (ft_putchr_pf(symb[n]));
	else
	{
		c = ft_writepointer_pf(n / 16);
		return (c + ft_writepointer_pf(n % 16));
	}
}

int	ft_putptr_pf(unsigned long long ptr)
{
	int	c;

	c = 0;
	c += ft_putstr_pf("0x");
	c += ft_writepointer_pf(ptr);
	return (c);
}
/*
static int	ft_ptrlen(unsigned long ptr)
{
	int	c;

	c = 0;
	while (ptr > 16)
	{
		c++;
		ptr = ptr / 16;
	}
	return (c);
}

static void	ft_printptr(unsigned long ptr)
{
	if (ptr >= 16)
	{
		ft_printptr(ptr / 16);
		ft_printptr(ptr % 16);
	}
	else
	{
		if (ptr < 10)
			ft_putchr_pf(ptr + '0');
		else
			ft_putchr_pf(ptr - 10 + 'a');
	}
}

int	ft_putptr_pf(unsigned long ptr)
{
	int		c;

	c = 0;
	c += ft_putstr_pf("0x");
	if (ptr == 0)
		c += ft_putchr_pf('0');
	else if (ptr < 0)
		return (ft_putptr_pf(-ptr));
	else
	{
		ft_printptr(ptr);
		c += ft_ptrlen(ptr);
	}
	return (c);
}

#include <stdio.h>
int	main()
{
	char *ptrt = "Hola";
	printf("%p\n", -1);
	ft_putptr_pf(-1);
	return (0);
}
*/