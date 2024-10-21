/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlira-ri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:32:02 by tlira-ri          #+#    #+#             */
/*   Updated: 2024/09/12 17:49:26 by tlira-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
int	main(int argc, char *argv[])
{
	int	lim = 3;
	if (argc >= 3)
	{
		printf("%d\n", ft_strncmp(argv[1], argv[2], lim));
	}
	else
	{
		printf("arguments numbers less than 3");
		return(1);
	}
	return(0);
}
