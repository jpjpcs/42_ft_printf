/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_aditional_func_2.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:23:29 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/01 19:01:54 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_puthex(unsigned long long n, fs)
{   
    int count;

    count = 0;
    if (n <= 9)
        count += ft_putchar(n + '0');
    if (n >= 10 && n <= 15)
    {
        if(fs == 'x')
            count += ft_putchar (n - 10 + 'a');
        else
            count += ft_putchar (n - 10 + 'A');
    }
    if (n >= 16)
    {
        ft_puthex(n / 16, fs);
        ft_puthex(n % 16, fs);
    }
   return (count);
}
// é if ou elseif nos seguintes ao if? o Matador meteu w e W (55 e 87) ao invés de a e A, e não subtraiu por 10. Porque subtraímos por 10?