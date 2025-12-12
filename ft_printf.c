/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denayoub <denayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:33:37 by denayoub          #+#    #+#             */
/*   Updated: 2025/12/12 22:32:02 by denayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_two(const char *s, int i, int count, va_list args)
{
	if (s[i + 1] == 's')
		count += (ft_putstr(va_arg(args, char *)));
	else if (s[i + 1] == 'c')
		count += (ft_putchar(va_arg(args, int)));
	else if (s[i + 1] == 'd')
		count += (ft_putnbr(va_arg(args, int)));
	else if (s[i + 1] == 'i')
		count += (ft_putnbr(va_arg(args, int)));
	else if (s[i + 1] == 'u')
		count += (ft_putunbr(va_arg(args, int)));
	else if (s[i + 1] == '%')
		count += write(1, "%", 1);
	else if (s[i + 1] == 'x')
		count += (ft_putnbr_hexa(va_arg(args, unsigned int), 'x'));
	else if (s[i + 1] == 'X')
		count += (ft_putnbr_hexa(va_arg(args, unsigned int), 'X'));
	else if (s[i + 1] == 'p')
		count += (ft_putptr(va_arg(args, void *)));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, s);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			count = ft_printf_two(s, i, count, args);
			i++;
		}
		else
		{
			write(1, &s[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
