/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:37:26 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/05 16:52:54 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
 
 int ft_printf(const char *str, ...)
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

int		main(void)
{
	char	a;
	char	*str;
	char	*str2;
	char	percent;
	int		i;
	unsigned int	b;
	unsigned int	hex;

	a = 'a';
	str = "ugdygd";
	str2 = "10";
	i = -42174612;
	b = -42174612;
	hex = -10;
	percent = '%';

	// %c
	write(1, "\nft_putchar:\n", 13);
	printf("%d\n", printf("%c\n", a));
	printf("%d\n", ft_printf("%c\n", a));
	printf("\n\n");

 	// %s
	write(1, "\nft_putstr:\n", 12);
	printf("%d\n", printf("%s\n", str));
	printf("%d\n", ft_printf("%s\n", str));
	printf("\n\n");

	/* // %p
	write(1, "\nft_putptr\n", 11);
	printf("%d\n", printf("%p\n", str2));
	printf("%d\n", ft_printf("%p\n", str2));
	printf("\n\n"); */
	
 	// %d
	write(1, "\nft_nbr:\n", 9);
	printf("%d\n", printf("%d\n", i));
	printf("%d\n", ft_printf("%d\n", i));
	printf("\n\n");

	// %i
	write(1, "\nft_nbr:\n", 9);
	printf("%d\n", printf("%i\n", i));
	printf("%d\n", ft_printf("%i\n", i));
	printf("\n\n");

   	int n = -2147483648;
  	printf("\nNum is: %d\n", ft_putnbr(n));
  	ft_putnbr(n);

	/* // %u
	write(1, "\nft_unsigned\n", 13);
	printf("%d\n", printf("%u\n", b));
	printf("%d\n", ft_printf("%u\n", b));
	printf("\n\n"); */

	// %x
	write(1, "\n\n\nft_x:\n", 9);
	printf("%d\n", printf("%x\n", hex));
	printf("%d\n", ft_printf("%x\n", hex));
	printf("\n\n");

	// %X
	write(1, "\nft_X:\n", 7);
	printf("%d\n", printf("%X\n", hex));
	printf("%d\n", ft_printf("%X\n", hex));
	printf("\n\n"); 

	// %%
	write(1, "\nft_percent:\n", 13);
	printf("%d\n", printf("%%\n"));
	printf("%d\n", ft_printf("%%\n", percent));
	printf("\n\n");
}