/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:12:30 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/28 10:12:32 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	ans;
	int	i;

	i = 1;
	ans = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (i < power)
	{
		ans *= nb;
		i++;
	}
	return (ans);
}
/*
int	main(void)
{
	int x = 2;
	int y = 2;
	x = ft_iterative_power(x,y);
	printf("%d\n", x);
	return (0);
}*/
