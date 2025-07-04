/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 13:04:23 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 13:04:26 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] >= 32 && str[i] <= 126)
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
	char	str2[8] = "\nPrueba4";
	char	empty[] = "";

	int i = ft_str_is_printable(str);
	int a = ft_str_is_printable(str2);
	int d = ft_str_is_printable(empty);
	printf("str=%d\n", i );
	printf("str2=%d\n", a );
	printf("empt=%d\n", d );
	return (0);
}*/
