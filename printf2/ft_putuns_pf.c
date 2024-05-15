/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuns_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 12:38:15 by alvargom          #+#    #+#             */
/*   Updated: 2024/05/06 15:56:21 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuns_pf(unsigned int n)
{
	int	c;

	c = 0;
	if (n < 10)
		c += ft_putchr_pf(n + '0');
	else
	{
		c += ft_putuns_pf(n / 10);
		c += ft_putuns_pf(n % 10);
	}
	return (c);
}
/*
int main()
{
	unsigned int	c;
	c = ft_putuns_pf(8000008);
	ft_putuns_pf(c);
	return (0);
}
*/