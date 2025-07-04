/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:51:37 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/29 12:51:38 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

int	ft_calculate_limit(int size, char **strs, char *sep)
{
	int	i;
	int	limit;

	i = 0;
	limit = 0;
	while (i < size)
	{
		limit += ft_strlen(strs[i]);
		i++;
	}
	limit += (size - 1) * ft_strlen(sep);
	return (limit);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		limit;
	char	*aux;

	if (size <= 0)
		return ((char *)malloc(0));
	limit = ft_calculate_limit(size, strs, sep);
	aux = (char *)malloc(sizeof(char) * (limit + 1));
	while (limit-- >= 0)
		aux[limit] = '\0';
	if (aux == NULL)
		return (0);
	i = -1;
	while (i++, i < size)
	{
		aux = ft_strcat(aux, strs[i]);
		if (i != size - 1)
			aux = ft_strcat(aux, sep);
	}
	return (aux);
}
/*
#include <stdio.h>
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s$\n", result);
	free(result);
}*/
