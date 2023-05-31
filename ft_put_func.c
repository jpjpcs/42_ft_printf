/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:24 by jode-jes          #+#    #+#             */
/*   Updated: 2023/05/31 12:16:20 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

include <ft_printf.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int ft_putstr(*str)
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
	
	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr (n);	
	}
	if (n > 9)
	{
		ft_putnbr(n % 10);
		ft_putnbr(n / 10);
	}
	if (n < 9)
	{
		ft_putchar(n + '0');
	}
}