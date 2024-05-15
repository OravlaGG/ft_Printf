/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvargom <alvargom@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:06:32 by alvargom          #+#    #+#             */
/*   Updated: 2024/05/13 10:22:41 by alvargom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
//FORMATS
int	ft_putchr_pf(int c);
int	ft_putstr_pf(const char *str);
int	ft_putuns_pf(unsigned int n);
int	ft_putptr_pf(unsigned long long ptr);
int	ft_putnum_pf(long long int n, int base, char ch);
#endif