/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:05:02 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/01 18:41:52 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 int ft_conversions(va_list args, const char fs) // fs is the format specifier
{			
	int len;

	len = 0;
	if (fs == 'c') // c s d x/X p u % instead of c s p d i u x X%
		len += ft_putchar(va_arg(args, int));
	else if (fs == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (fs == 'd' || fs == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (fs == 'x' || fs == 'X')
		len += ft_puthex(va_arg(args, unsigned long long), fs);	//here we pass the fs (format specifier) because we don´t know if we´re going to pass an x or X
	else if (fs == 'p')
		len += ft_putptr(va_arg(args, unsigned long long));	
	else if (fs == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (fs == '%')
		len += ft_putchar('%');
	return (len);
}

//no putchar, pq não lhe passo um char em vez de um int, ou pq não recebe um int em vez de um char?!
// no puthex pode ser unsigned int como no ft_unsigned em vez de unsigned long long? e no putprt podemos usar void em vez de unsigned long long?
 