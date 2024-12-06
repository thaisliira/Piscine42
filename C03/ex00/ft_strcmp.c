/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlira-ri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:41:41 by tlira-ri          #+#    #+#             */
/*   Updated: 2024/09/12 17:31:07 by tlira-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int	main(int argc, char *argv[])
{
	if (argc >= 3)
	{
		printf("%d\n", ft_strcmp(argv[1], argv[2]));
	}
	else
	{
		printf("arguments numbers less than 3");
		return(1);
	}
	return(0);
}
