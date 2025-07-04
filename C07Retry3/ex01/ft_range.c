/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:41:45 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/29 10:41:46 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	if (min >= max)
		return (NULL);
	res = (int *)malloc((max - min) * sizeof(*res));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*result;

	min = 0;
	max = 20;
	result = ft_range(min, max);
	i = 0;
	while (i < (max - min))
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}*/
