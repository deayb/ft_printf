/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denayoub <denayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:33:37 by denayoub          #+#    #+#             */
/*   Updated: 2025/12/09 20:27:12 by denayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// int	ft_putptr(void *)
// {
	
// }

int	ft_printf(const char *s, ...)
{
	va_list	args;
	va_start(args, s);
	int	i;
	int	count;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == 's')
				count += (ft_putstr(va_arg(args, char *)));
			if (s[i + 1] == 'c')
				count += (ft_putchar(va_arg(args, int)));
			if (s[i + 1] == 'd')
				count += (ft_putnbr(va_arg(args, int)));
			if (s[i + 1] == 'i')
				count += (ft_putnbr(va_arg(args, int)));
			// if (s[i + 1] == 'p')
			// 	count += (ft_putptr(va_arg(args, void *)));
			if (s[i + 1] == 'u')
				count += (ft_putunbr(va_arg(args, int)));
			if (s[i + 1] == '%')
				count += write(1, "%", 1);
			i++;
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}

int main()
{
	ft_printf("====================\n\nft_printf: %c\n", 'A');
	printf("printf: %c\n\n", 'A');
	ft_printf("====================\n\nft_printf: my Name is %s\n", "Deni");
	printf("printf: my Name is %s\n\n", "Deni");
	ft_printf("====================\n\nft+printf: i am %d years old\n", 20);
	printf("printf: i am %d years old\n\n", 20);
	ft_printf("====================\n\nft_printf: i have 50%% on my phone\n");
	printf("prinft: i have 50%% on my phone\n\n");
	ft_printf("====================\n\nft_printf: i was born in %i\n", 2005);
	printf("printf: i was born in %i\n\n", 2005);
	ft_printf("====================\n\nft_printf: i want %u$ euros\n", 4294967295U);
	printf("printf: i want %u$ euros\n\n====================", 4294967295U);
	return (0);
}