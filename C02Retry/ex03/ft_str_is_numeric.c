/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:56:07 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 11:56:09 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i] >= '0' && str[i] <= '9')
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
	char	str2[8] = "12315";
	char	empty[8] = "";

	int i = ft_str_is_numeric(s1);
	int a = ft_str_is_numeric(s2);
	int d = ft_str_is_numeric(s3);
	printf("s1=%d\n", i );
	printf("s2=%d\n", a );
	printf("s3=%d\n", d );
	return (0);
}*/
