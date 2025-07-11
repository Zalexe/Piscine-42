/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:20:01 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 14:20:03 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main(void)
{
	char	s2[8] = "abcdefg";
	char	s1[8];

	ft_strlcpy(s1, s2, 5);
	printf("s2=%s\n", s2 );
	printf("s1=%s\n", s1 );
	return (0);
}*/
