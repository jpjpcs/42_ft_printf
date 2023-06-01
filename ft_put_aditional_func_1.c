/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_aditional_func_1.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 12:11:24 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/01 18:27:25 by jode-jes         ###   ########.fr       */
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
		ft_putchar(str[i]);
		i++;
	return (i);
}

int ft_putnbr(int nb)
{
	long int n;
	
	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n <= 9)
	{
		ft_putchar(n + '0');
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	return (n);
	
	/* if (n < 0)
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
	} */
}

int main ()
{
  int n = -2147483648;
  printf("\nNum is: %d\n", ft_putnbr(n));
  ft_putnbr(n);
  return (0);
  }

