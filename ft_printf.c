/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:37:26 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/30 12:15:37 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include "ft_printf.h"

 int ft_printf(const char *str, ...);
 {
	va_list args;		// va_list is a type to hold information about variable arguments
	int i;			// count is the number of characters printed
	int len;			// len is the length of the string

	i = 0;
	len = 0;
	
	va_start(args, str);	// va_start is a macro to initialize the va_list
	while (str[i])	
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_conversions(args,str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);		// va_end is a macro to clean up the memory assigned to the va_list
	return (len);	// return the number of characters printed
     
 }