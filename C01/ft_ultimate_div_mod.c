/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlira-ri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:01:00 by tlira-ri          #+#    #+#             */
/*   Updated: 2024/09/10 12:42:10 by tlira-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d\n", a);
	printf("mod: %d\n", b);
}*/
