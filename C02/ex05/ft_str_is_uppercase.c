/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:15:13 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 12:15:15 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] >= 'A' && str[i] <= 'Z')
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
	char	str[7] = "PRUEBAS";
	char	str2[8] = "Prueba42";
	char	empty[] = "";

	int i = ft_str_is_uppercase(str);
	int a = ft_str_is_uppercase(str2);
	int d = ft_str_is_uppercase(empty);
	printf("str=%d\n", i );
	printf("str2=%d\n", a );
	printf("empt=%d\n", d );
	return (0);
}*/
