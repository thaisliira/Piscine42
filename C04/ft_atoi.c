/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlira-ri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:29:00 by tlira-ri          #+#    #+#             */
/*   Updated: 2024/09/19 12:55:20 by tlira-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	num;

	i = 0;
	while((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	signal = 1;
	while(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			signal = signal * -1;
		}
		i++;
	}
	num = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';	// I - (num * 10) para 'abrir'
		i++;				// uma casa e adicionar o proximo digito
						// II - (str[i] - '0') transformar um char em int
	}
	return (signal * num);	
}

#include <stdio.h>

int	main(void)
{
	char string[] = " 	--123teytey456";

	int	result = ft_atoi(string);
	printf("%i", result);
}
