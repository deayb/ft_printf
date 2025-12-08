/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denayoub <denayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:33:37 by denayoub          #+#    #+#             */
/*   Updated: 2025/12/08 22:08:41 by denayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

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

int	ft_putchar(int c)
{
	write (1, &c, 1);
	return (c);
}

int	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
	return (nb);
}

int	ft_putptr( )
{
	
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	va_start(args, s);
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			if (s[i + 1] == 's')
				return (ft_putstr(va_arg(args, char *)));
			if (s[i + 1] == 'c')
				return (ft_putchar(va_arg(args, int)));
			if (s[i + 1] == 'd')
				return (ft_putnbr(va_arg(args, int)));
			if (s[i + 1] == 'p')
				return (ft_putptr(va_arg(args, void *)));
			
		}
		else
			write(1, &s[i], 1);
		i++;
	}
	return (0);
}

int main()
{
	ft_printf("my name is %d\n", -4654);
	return (0);
}