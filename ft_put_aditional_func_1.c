/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_aditional_func_1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:24 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/05 16:34:31 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_putstr(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[i])
		ft_putchar(str[i++]);
	return (i);
}

int ft_putnbr(int nb)
{
	long int n;
	int count;
	
	n = nb;
	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n = -n;
	}
	if (n <= 9)
	{
		count += ft_putchar(n + '0');
	}
	if (n >= 10)
	{
		count += ft_putnbr(n / 10);
		count += ft_putnbr(n % 10);
	}
	return (count);
}



