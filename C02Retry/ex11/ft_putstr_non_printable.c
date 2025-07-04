/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:45:06 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 14:45:09 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		l;
	char	*hex;

	hex = "0123456789abcdef";
	l = -1;
	while (str[++l])
	{
		if ((str[l] < 32 || str[l] > 126))
		{
			write(1, "\\\\", 1);
			write(1, &hex[(unsigned char)str[l] / 16], 1);
			write(1, &hex[(unsigned char)str[l] % 16], 1);
		}
		else
			write(1, &str[l], 1);
	}
}
/*
int	main(void)
{
	char	s2[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(s2);
	return (0);
}*/
