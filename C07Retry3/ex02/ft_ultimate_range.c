/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:40:40 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/29 11:40:41 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*aux;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	aux = malloc(sizeof(int) * (max - min));
	if (aux == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = aux;
	i = 0;
	while (i < (max - min))
	{
		aux[i] = min + i;
		i++;
	}
	return (max - min);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	*result;
	int	size;

	min = 0;
	max = 20;
	size = ft_ultimate_range(&result, min, max);
	i = 0;
	while (i < size)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}*/
