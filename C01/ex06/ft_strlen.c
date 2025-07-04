/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:10:06 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/21 11:10:10 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		n++;
	}
	return (n);
}
/*
int	main(void)
{
	char	*str;
	int	n;
	
	str = "mi cuerpo pide sol";
	
	n = ft_strlen(str);
	printf("%d",n);
	return (0);
}*/
