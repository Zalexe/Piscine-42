/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:00:07 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 10:00:14 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*saved;

	saved = dest;
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (saved);
}
/*
int	main(void)
{
	char	s2[8] = "abcdefg";
	char	s1[8];

	ft_strcpy(s1, s2 );
	printf("s2=%s\n", s2 );
	printf("s1=%s\n", s1 );
	return (0);
}*/
