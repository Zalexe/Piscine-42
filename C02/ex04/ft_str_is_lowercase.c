/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:59:51 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 11:59:53 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] >= 'a' && str[i] <= 'z')
			i++;
		if (str[i] == '\0')
			return (1);
		else
			return (0);
	}
}
/*
int	main(void)
{
	char	str[7] = "pruebas";
	char	str2[8] = "Prueba42";
	char	empty[] = "";

	int i = ft_str_is_lowercase(str);
	int a = ft_str_is_lowercase(str2);
	int d = ft_str_is_lowercase(empty);
	printf("str=%d\n", i );
	printf("str2=%d\n", a );
	printf("empty=%d\n", d );
	return (0);
}*/
