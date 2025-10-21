/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banne <banne@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:30:59 by banne             #+#    #+#             */
/*   Updated: 2025/10/21 14:42:51 by banne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putchar(char n)
{
	write(1, &n, 1);
	return (1);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_tolower(char *str)
{
	int		i;
	char	*resultat;

	i = 0;
	resultat = malloc(ft_strlen(str) + 1);
	while (str[i])
	{
		if ((str[i] > 64 && str[i] < 91))
			resultat[i] = (str[i] + 32);
		else
			resultat[i] = str[i];
		i++;
	}
	resultat[i] = '\0';
	return (resultat);
}

int	is_valid_format(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || \
		c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	return (i);
}
