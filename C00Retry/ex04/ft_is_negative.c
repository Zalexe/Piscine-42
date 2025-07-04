/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:17:07 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/17 10:21:46 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n >= 0)
	{
		write(1, &pos, 1);
	}
	else if (n < 0)
	{
		write(1, &neg, 1);
	}
}
/*
int main()
{
	ft_is_negative(1);
	ft_is_negative(0);
	ft_is_negative(-2);
	
	return (0);
}
*/
