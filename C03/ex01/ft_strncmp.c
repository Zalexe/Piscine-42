/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:56:04 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/23 10:56:06 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	l;

	l = 0;
	while ((s1[l] != '\0' || s2[l] != '\0') && l < n)
	{
		if (s1[l] > s2[l])
		{
			return (1);
		}
		else if (s1[l] < s2[l])
		{
			return (-1);
		}
		l++;
	}
	return (0);
}
/*
int	main(void)
{

	int t = ft_strncmp("zeta", "delta", 3);	
	printf("%d", t);
	return (0);
}*/
