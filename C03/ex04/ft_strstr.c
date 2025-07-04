/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:12:16 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/23 11:12:17 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if (*b == 0)
		return (str);
	while (*str++ != 0)
	{
		if (*str != *to_find)
			;
		a = str;
		while (1)
		{
			if (*b == 0)
				return (str);
			if (*a++ != *b++)
				break ;
		}
		b = to_find;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	string[64] ="This is a test string for testing strstr";
	char	*p;

	p = ft_strstr(string,"test");
	if (p)
	{
		printf("String found:\n" );

		printf ("1st occurrence of st \"test\" in \"%s\" is:\n%s", string, p);
	}
	else
	{
		printf("String not found!\n" );
	}

	return 0;
}*/
