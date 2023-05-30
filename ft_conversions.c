/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:05:02 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/30 12:18:06 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "ft_printf.h"

int ft_conversions(va_list args, const char fs); // fs is the format specifier

{			
	int len;

	len = 0;
	if (fs == 'c')
		len += ft_putchar(va_arg(args, int));
	else if (fs == 's')
		len += ft_putstr(va_arg(args, char *));
	else if (fs == 'p')
		len += ft_putptr(va_arg(args, unsigned long long));
	else if (fs == 'd' || fs == 'i')
		len += ft_putnbr(va_arg(args, int));
	else if (fs == 'u')
		len += ft_unsigned(va_arg(args, unsigned int));
	else if (fs == 'x' || fs == 'X')
		len += ft_puthex(va_arg(args, unsigned long long), fs);
	else if (fs == '%')
		len += ft_putchar('%');
	return (len);

}