/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denayoub <denayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 23:22:50 by denayoub          #+#    #+#             */
/*   Updated: 2025/12/12 22:31:33 by denayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_hexa_lower(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_putnbr_hexa_lower(nb / 16);
		count += ft_putnbr_hexa_lower(nb % 16);
	}
	else if (nb <= 9)
		count += ft_putchar(nb + 48);
	else
		count += ft_putchar(nb - 10 + 'a');
	return (count);
}

int	ft_putnbr_hexa_touper(unsigned long nb)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_putnbr_hexa_touper(nb / 16);
		count += ft_putnbr_hexa_touper(nb % 16);
	}
	else if (nb <= 9)
		count += ft_putchar(nb + 48);
	else
		count += ft_putchar(nb - 10 + 'A');
	return (count);
}

int	ft_putnbr_hexa(unsigned long nb, char format)
{
	if (format == 'x')
		return (ft_putnbr_hexa_lower(nb));
	else if (format == 'X')
		return (ft_putnbr_hexa_touper(nb));
	return (0);
}
