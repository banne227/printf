/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banne <banne@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:31:09 by banne             #+#    #+#             */
/*   Updated: 2025/10/21 16:19:27 by banne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ascii_to_hexa(int nbr, int low)
{
	int		i;
	char	*ref;
	char	*resultat;
	int		size;

	i = 0;
	if (nbr % 16 > 0)
		resultat = malloc(nbr / 16 + 2);
	else
		resultat = malloc(nbr / 16 + 1);
	if (!resultat)
		return (0);
	ref = "0123456789ABCDEF";
	while (nbr >= 16)
	{
		resultat[i] = ref[nbr % 16];
		nbr /= 16;
		i++;
	}
	resultat[i] = ref[nbr];
	resultat[i + 1] = '\0';
	if (low == 1)
		resultat = ft_tolower(resultat);
	size = ft_putstr(resultat);
	return (free(resultat), size);
}

char	ft_puthex(unsigned long n)
{
	char	*hex;

	hex = "0123456789abcdef";
	return (hex[n % 16]);
}

void	tri(char *str)
{
	int		start;
	int		end;
	char	temp;

	start = 0;
	end = ft_strlen(str) - 1;
	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return ;
}

int	print_address(unsigned long addr)
{
	char	*resultat;
	int		i;
	int		size;

	if (addr == 0)
		return (ft_putstr("(nil)"), 5);
	i = 0;
	resultat = malloc(sizeof(unsigned long) * 2 + 1);
	if (!resultat)
		return (0);
	ft_putstr("0x");
	while (addr >= 16)
	{
		resultat[i] = ft_puthex(addr);
		addr /= 16;
		i++;
	}
	resultat[i] = ft_puthex(addr);
	resultat[i + 1] = '\0';
	tri(resultat);
	ft_putstr(resultat);
	size = ft_strlen(resultat);
	free(resultat);
	return (size + 2);
}
