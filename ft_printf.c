/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: banne <banne@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:08:16 by banne             #+#    #+#             */
/*   Updated: 2025/10/21 16:19:54 by banne            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	choix_format(char c, va_list arg)
{
	int	count;

	count = 0;
	if (c == 'c')
		count += ft_putchar(va_arg(arg, int));
	if (c == 's')
		count += ft_print_s(va_arg(arg, char *));
	if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(arg, int));
	if (c == 'u')
		count += ft_putnbr_unsigned(va_arg(arg, int));
	if (c == '%')
	{
		va_arg(arg, int);
		count += ft_putchar('%');
	}
	if (c == 'X')
		count += ascii_to_hexa(va_arg(arg, int), 0);
	if (c == 'x')
		count += ascii_to_hexa(va_arg(arg, int), 1);
	if (c == 'p')
		count += print_address((unsigned long) va_arg(arg, void *));
	return (count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	arg;
	int		count;

	count = 0;
	i = 0;
	va_start(arg, str);
	while (str[i])
	{
		while (str[i] != '%' && str[i])
		{
			ft_putchar (str[i]);
			i++;
		}
		i++;
		if (is_valid_format (str[i]))
			count += choix_format(str[i], arg);
		i++;
	}
	va_end(arg);
	return (count);
}

//int main(void)
//{ 
//    printf("\n=================== TESTS ft_printf ============\n");

//    // Test %c
//    printf("\n   --TEST-- %%c:\n");
//    printf("%d\n\n", printf("printf    : %c \nsize ", 'A'));
//    printf("%d\n\n", printf("ft_printf : %c \nsize ", 'A'));

//	// Test %s
//    printf("\n   --TEST-- %%s:\n");
//    printf("%d\n\n", printf("printf    : %s \nsize ", "Hello"));
//    printf("%d\n\n", printf("ft_printf : %s \nsize ", "Hello"));

//	// Test %d
//	printf("\n   --TEST-- %%d:\n");
//    printf("%d\n\n", printf("printf    : %d \nsize ", 42));
//    printf("%d\n\n", printf("ft_printf : %d \nsize ", 42));

//		// Test %p
//	printf("\n   --TEST-- %%p:\n");
//	int a = 10;
//	printf("%d\n\n", printf("printf    : %p \nsize ", (void*)&a));
//	printf("%d\n\n", printf("ft_printf : %p \nsize ", (void*)&a));

//		// Test %u
//	printf("\n   --TEST-- %%u:\n");
//	printf("%d\n\n", printf("printf    : %u \nsize ", 3000000000u));
//	printf("%d\n\n", printf("ft_printf : %u \nsize ", 3000000000u));

//		// Test %x
//	printf("\n   --TEST-- %%x:\n");
//	printf("%d\n\n", printf("printf    : %x \nsize ", 255));
//	printf("%d\n\n", printf("ft_printf : %x \nsize ", 255));

//	// Test %X
//	printf("\n   --TEST-- %%X:\n");
//	printf("%d\n\n", printf("printf    : %X \nsize ", 255));
//	printf("%d\n\n", printf("ft_printf : %X \nsize ", 255));

//	// Test %%
//	printf("\n   --TEST-- %%%%:\n");
//	printf("%d\n\n", printf("printf    : %% \nsize "));
//	printf("%d\n\n", printf("ft_printf : %% \nsize "));

//    return (0);
//}