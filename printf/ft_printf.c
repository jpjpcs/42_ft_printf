/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 11:37:26 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/13 12:23:48 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// va_list is a type to hold information about variable arguments
// count is the number of characters printed
// len is the length of the string
// va_start is a macro to initialize the va_list
// va_end is a macro to clean up the memory assigned to the va_list
// return the number of characters printed
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_conversions(args, str[i]);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}

/* int		main(void)
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
	ft_printf("%d\n", ft_printf("%c\n", a));
	
 	// %s
	write(1, "\nft_putstr:\n", 12);
	printf("%d char\n", printf("%s\n", str));
	ft_printf("%d char\n", ft_printf("%s\n", str));
	
	// %p
	write(1, "\nft_putptr\n", 11);
	printf("%d char\n", printf("%p\n", str2));
	ft_printf("%d char\n", ft_printf("%p\n", str2));
		
 	// %d
	write(1, "\nft_nbr d:\n", 11);
	printf("%d char\n", printf("%d\n", i));
	ft_printf("%d char\n", ft_printf("%d\n", i));

	// %i
	write(1, "\nft_nbr i:\n", 11);
	printf("%d char\n", printf("%i\n", i));
	ft_printf("%d char\n", ft_printf("%i\n", i));
   	
	int n = -2147483648;
  	ft_printf("\nNum is: %d\n", n);
	printf("Num is: %d\n", n);	
	ft_printf("\nNum is: %i\n", n);
	printf("Num is: %i\n", n);	

	// %u
	write(1, "\nft_unsigned\n", 13);
	printf("%d\n", printf("%u\n", b));
	printf("%d\n", ft_printf("%u\n", b));

	// %x
	write(1, "\nft_x:\n", 7);
	printf("%d\n", printf("%x\n", hex));
	ft_printf("%d\n", ft_printf("%x\n", hex));

	// %X
	write(1, "\nft_X:\n", 7);
	printf("%d\n", printf("%X\n", hex));
	ft_printf("%d\n", ft_printf("%X\n", hex));

	// %%
	write(1, "\nft_percent:\n", 13);
	printf("%d\n", printf("%%\n"));
	ft_printf("%d\n", ft_printf("%%\n", percent));
	printf("\n");
} */