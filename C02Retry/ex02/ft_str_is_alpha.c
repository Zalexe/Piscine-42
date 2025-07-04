/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:10:49 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 11:10:51 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
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
	char	str[8] = "ad2asdf";
	char	str2[8] = "abcdEfg";
	char	empty[8] = "abcdefg";

	int i = ft_str_is_alpha(str);
	int a = ft_str_is_alpha(str2);
	int d = ft_str_is_alpha(empty);
	printf("str=%d\n", i );
	printf("str2=%d\n", a );
	printf("empty=%d\n", d );
	return (0);
}*/
