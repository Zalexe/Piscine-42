/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:29:09 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/28 14:29:10 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	int		i;
	char	j;

	i = 0;
	j = '\n';
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, &j, 1);
}

void	ft_sort_params(char **argv, int size)
{
	int		n;
	int		i;
	int		k;
	char	*swap;

	i = 0;
	while (i < size - 1)
	{
		n = 0;
		while (n < size - i -1)
		{
			k = 0;
			while (argv[n][k] && argv[n + 1][k] && argv[n][k] == argv[n + 1][k])
				k++;
			if (argv[n][k] > argv[n + 1][k])
			{
				swap = argv[n];
				argv[n] = argv[n + 1];
				argv[n + 1] = swap;
			}
			n++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_params(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
