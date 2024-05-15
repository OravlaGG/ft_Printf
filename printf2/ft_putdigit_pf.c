/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 13:03:45 by alvargom          #+#    #+#             */
/*   Updated: 2024/05/13 10:22:29 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnum_pf(long long int n, int base, char ch)
{
	int		c;
	char	*symb;

	symb = "0123456789abcdef";
	if (ch == 'X')
		symb = "0123456789ABCDEF";
	c = 0;
	if (n < 0)
	{
		write(1, "-", 1);
		return (ft_putnum_pf(-n, base, ch) + 1);
	}
	else if (n < base)
		return (ft_putchr_pf(symb[n]));
	else
	{
		c = ft_putnum_pf(n / base, base, ch);
		return (c + ft_putnum_pf(n % base, base, ch));
	}
}
/*
#include <stdio.h>
int main()
{
	printf("%i", )
}*/