/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denayoub <denayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 20:20:08 by denayoub          #+#    #+#             */
/*   Updated: 2025/12/13 16:42:35 by denayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putnbr(int nb);
int	ft_putunbr(unsigned int nb);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_printf(const char *s, ...);
int	ft_putptr(void *ptr);
int	ft_putnbr_hexa(unsigned long nb, char format);

#endif
