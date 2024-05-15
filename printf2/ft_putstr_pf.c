/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 11:43:03 by alvargom          #+#    #+#             */
/*   Updated: 2024/05/07 12:57:11 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_pf(const char *str)
{
	int	c;

	c = 0;
	if (!str)
		return (ft_putstr_pf("(null)"));
	while (*str != '\0')
	{
		c += ft_putchr_pf(*str);
		str++;
	}
	return (c);
}
