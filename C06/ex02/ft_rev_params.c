/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:23:25 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/28 14:23:28 by cmarrued         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i != 0)
	{
		ft_putstr(argv[i]);
		i--;
	}
	return (0);
}
