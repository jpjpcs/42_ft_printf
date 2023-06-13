/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_aditional_func_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:23:29 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/13 12:18:49 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//we had used -10 to print the correct letter.
//The lowercase letter 'a' is 97 
//(someguys used ft_printchar(n+ 87) instead).
//In hexadecimal,'a' corresponds to the value 10. 
//Since the ASCII value of 'a' (97) minus 10 gives 87,
//adding 87 to n allows the code to print the...
// corresponding uppercase hexadecimal character.
//we had used -10 to print the correct letter. 
//The uppercase letter 'A' is 65 
//(someguys used ft_printchar(n+ 55) instead). In hexadecimal,
//'A' corresponds to the value 10. 
//Since the ASCII value of 'A' (65) minus 10 gives 55,
//adding 55 to n allows the code to print the...
// corresponding uppercase hexadecimal character.
//Using w(55) or M(87) is the same of a-10 or A-10.
//the ft_puthexptr is equal to ft_puthex but with unsigned long long.
//why? Because the ptr is bigger than an hexadecimal number.
//So in the tests putptr needs to use and unsigned long or
//unsigned long long. I used unsigned long long for a precaution reason.
//nil is used to ptr and null to str.
//we can use if or else if in puthex or puthexptr.
//why? cause its equal in this case. if doesn't enter in the first if,
//it will enter in the second if or the third one. If it enter the first if,
//it would not enter the second or the third, 
//once the values of n are different.
//only in the case that is possible to enter in 2 or 3 ifs, 
//we must use else if.
int	ft_puthex(unsigned int n, const char fs)
{
	long	count;

	count = 0;
	if (n <= 9)
		count += ft_putchar(n + '0');
	else if (n >= 10 && n <= 15)
	{
		if (fs == 'x')
			count += ft_putchar(n - 10 + 'a');
		else
			count += ft_putchar(n - 10 + 'A');
	}
	else if (n >= 16)
	{
		count += ft_puthex(n / 16, fs);
		count += ft_puthex(n % 16, fs);
	}
	return (count);
}

int	ft_puthexptr(unsigned long long n, const char fs)
{
	int	count;

	count = 0;
	if (n <= 9)
		count += ft_putchar(n + '0');
	else if (n >= 10 && n <= 15)
	{
		if (fs == 'x')
			count += ft_putchar(n - 10 + 'a');
		else
			count += ft_putchar(n - 10 + 'A');
	}
	if (n >= 16)
	{
		count += ft_puthexptr(n / 16, fs);
		count += ft_puthexptr(n % 16, fs);
	}
	return (count);
}

int	ft_putptr(unsigned long long ptr)
{
	int		count;
	char	*str;
	char	*str2;

	str = "(nil)";
	str2 = "0x";
	count = 0;
	if (!ptr)
	{
		count += ft_putstr(str);
		return (count);
	}
	else
	{
		count += ft_putstr(str2);
		count += ft_puthexptr((unsigned long long)ptr, 'x');
	}
	return (count);
}

int	ft_unsigned(unsigned int unsigned_nb)
{
	int	count;

	count = 0;
	if (unsigned_nb <= 9)
		count += ft_putchar(unsigned_nb + '0');
	if (unsigned_nb >= 10)
	{
		count += ft_putnbr(unsigned_nb / 10);
		count += ft_putnbr(unsigned_nb % 10);
	}
	return (count);
}
