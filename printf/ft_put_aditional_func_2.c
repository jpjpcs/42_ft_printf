/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_aditional_func_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:23:29 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/12 16:41:12 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, const char fs)
{
	int	count;

	count = 0;
	if (n <= 9)
		count += ft_putchar(n + '0');
	if (n >= 10 && n <= 15)
	{
		if (fs == 'x')
			count += ft_putchar(n - 10 + 'a'); //we had used
				-10 to print the correct letter. THe lowercase letter 'a' is 97 (someguys used ft_printchar(n
						+ 87) instead). In hexadecimal,
				'a' corresponds to the value 10. Since the ASCII value of 'a' (97) minus 10 gives 87,
				adding 87 to n allows the code to print the corresponding uppercase hexadecimal character.
		else
			count += ft_putchar(n - 10 + 'A'); //we had used
				-10 to print the correct letter. THe uppercase letter 'A' is 65 (someguys used ft_printchar(n
						+ 55) instead). In hexadecimal,
				'A' corresponds to the value 10. Since the ASCII value of 'A' (65) minus 10 gives 55,
				adding 55 to n allows the code to print the corresponding uppercase hexadecimal character.
	}
	if (n >= 16)
	{
		count += ft_puthex(n / 16, fs);
		count += ft_puthex(n % 16, fs);
	}
	return (count);
}
// é if ou elseif nos seguintes ao if? o Matador meteu w e W (55 e 87) ao invés de a e A,
	e não subtraiu por 10. Porque subtraímos por 10?

int	ft_putptr(unsigned long ptr)
{
	int		count;
	char	*str;
	char	*str2;

	str = "(nill)";
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
		count += ft_puthex((unsigned long)ptr, 'x');
	}
	return (count);
}

int	ft_unsigned(unsigned int unsigned_nb)
{
	int count;

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