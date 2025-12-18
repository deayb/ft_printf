/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denayoub <denayoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 21:36:26 by denayoub          #+#    #+#             */
/*   Updated: 2025/12/18 19:25:00 by denayoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("====================\n\nft_printf: %c\n", 'A');
	printf("printf: %c\n\n", 'A');
	ft_printf("====================\n\nft_printf: %s\n", "Hello");
	printf("printf: %s\n\n", "Hello");
	ft_printf("====================\n\nft+printf: %d\n", 20);
	printf("printf: %d\n\n", 20);
	ft_printf("====================\n\nft_printf: %%\n");
	printf("prinft: %%\n\n");
	ft_printf("====================\n\nft_printf: %i\n", 2005);
	printf("printf: %i\n\n", 2005);
	ft_printf("====================\n\nft_printf: %u\n", 4294967295);
	printf("printf: %u\n\n", 4294967295U);
	ft_printf("====================\n\nft_printf: %X\n", 455);
	printf("prinft: %X\n\n", 455);
	int x = 42;
	ft_printf("====================\n\nft_printf: %p\n", &x);
	printf("prinft: %p", &x);
	return (0);
}

