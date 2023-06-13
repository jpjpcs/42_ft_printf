/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 12:38:43 by jode-jes          #+#    #+#             */
/*   Updated: 2023/06/13 12:23:22 by jode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>

int					ft_printf(const char *str, ...);
int					ft_conversions(va_list args, char fs);
int					ft_putchar(char c);
int					ft_putstr(char *str);
int					ft_putnbr(int nb);
int					ft_puthex(unsigned int n, const char fs);
int					ft_puthexptr(unsigned long long n, const char fs);
int					ft_putptr(unsigned long long ptr);
int					ft_unsigned(unsigned int unsigned_nb);

#endif