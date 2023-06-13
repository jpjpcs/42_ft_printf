/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:05:02 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/13 12:03:40 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// fs is the format specifier
// c s d x/X p u % instead of c s p d i u x X%
//in puthex we pass the fs (format specifier),
//because we don´t know if we´re going to pass an x or X
//unsigned long and unsigned long long are both integer data types,
// that can hold non-negative values. 
//However, they differ in terms of their storage size
//unsigned long: 0 to 4,294,967,295 (2^32 - 1) or 
//0 to 18,446,744,073,709,551,615 (2^64 - 1).
//unsigned long long: 0 to 18,446,744,073,709,551,615 (2^64 - 1).
//If you need to work with larger integers or a wider range of values, 
//unsigned long long is the appropriate choice. 
//However, for most general-purpose cases, unsigned long is sufficient.
int	ft_conversions(va_list args, char fs)
{
	int	len;

	len = 0;
	if (fs == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (fs == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (fs == 'd' || fs == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (fs == 'x' || fs == 'X')
		len += ft_puthex(va_arg(args, unsigned int), fs);
	else if (fs == 'p')
		len += ft_putptr(va_arg(args, unsigned long long));
	else if (fs == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (fs == '%')
		len += ft_putchar('%');
	return (len);
}
