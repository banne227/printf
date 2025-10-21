/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banne <banne@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by banne             #+#    #+#             */
/*   Updated: 2025/10/21 14:41:55 by banne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		choix_format(char c, va_list arg);
int		is_valid_format(char c);
int		nbr_arg(const char *str);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(int n);
int		ft_len_nb(long int n);
char	*ft_tolower(char *str);
int		ascii_to_hexa(int nbr, int low);
int		ft_itoa(int n);
int		ft_strlen(const char *str);
int		ft_putchar(char n);
int		print_address(unsigned long addr);
char	ft_puthex(unsigned long n);
void	tri(char *str);
int		ft_print_s(char *str);

#endif