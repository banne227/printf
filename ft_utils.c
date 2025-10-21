/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banne <banne@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:46 by banne             #+#    #+#             */
/*   Updated: 2025/10/21 14:42:44 by banne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_s(char *str)
{
	if (str == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_len_nb( long int n)
{
	int	p;

	p = 0;
	if (n == 0)
		p = 1;
	while (n > 0)
	{
		n = n / 10;
		p++;
	}
	return (p);
}

int	ft_putnbr(int n)
{
	int	s;
	int	size;

	s = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
		s += 1;
	}
	size = ft_len_nb(n);
	if (n > 9)
		ft_putnbr(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
	while (n / 10 > 0)
		n = n / 10;
	return (s + size);
}

int	ft_putnbr_unsigned(int n)
{
	int	s;
	int	size;

	size = ft_len_nb(n);
	s = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (n < 0)
	{
		n = n * -1;
		s += 1;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	n = n % 10 + '0';
	write(1, &n, 1);
	while (n / 10 > 0)
		n = n / 10;
	return (s + size);
}
