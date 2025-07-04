/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:11:48 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/28 14:11:54 by cmarrued         ###   ########.fr       */
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
	ft_putstr(argv[0]);
	return (argc);
}
