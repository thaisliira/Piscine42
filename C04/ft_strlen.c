/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlira-ri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:10:44 by tlira-ri          #+#    #+#             */
/*   Updated: 2024/09/16 12:10:51 by tlira-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*int	main(void)
{
	char	str[] = "42 Porto";
	int	nbr;

	nbr = ft_strlen(str);
	printf("o tamanho da string e: %d\n", nbr);
	return (0);
}*/
