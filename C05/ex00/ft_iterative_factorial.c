/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:00:35 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/25 12:00:37 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ans;
	int	i;

	i = 1;
	ans = 1;
	while (i <= nb)
	{
		ans *= i;
		i++;
	}
	return (ans);
}
/*
int	main(void)
{
	int x = 5;
	x = ft_iterative_factorial(x);
	printf("%d\n", x);
	return (0);
}*/
