/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:30:58 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 15:31:01 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	l;

	l = 0;
	while (s1[l] != '\0' || s2[l] != '\0')
	{
		if (s1[l] > s2[l])
			return (1);
		else if (s1[l] < s2[l])
			return (-1);
		l++;
	}
	return (0);
}
/*
int	main(void)
{

	int t = ft_strcmp("zeta", "delta");	
	printf("%d", t);
	return (0);
}*/
