/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlira-ri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 16:03:49 by tlira-ri          #+#    #+#             */
/*   Updated: 2024/09/07 20:50:48 by tlira-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	line(int x, char start, char middle, char end)
{
	int	width;

	if (x > 0)
	{
		ft_putchar(start);
	}
	width = x - 2;
	while (width > 0)
	{
		ft_putchar(middle);
		width--;
	}
	if (x > 1)
	{
		ft_putchar(end);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	height;

	if (x <= 0 || y <= 0)
	{
		write(1, "Error: Number most be positive", 31);
		return ;
	}
	line(x, 'o', '-', 'o');
	height = y - 2;
	while (height > 0)
	{
		line(x, '|', ' ', '|');
		height--;
	}
	if (y > 1)
	{
		line(x, 'o', '-', 'o');
	}
}
