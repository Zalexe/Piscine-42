/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:15:03 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/24 11:15:05 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_base_check(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = 0;
		while (base[j])
		{
			if (i != j && base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	base_size;
	int	nbr_str[500];

	i = 0;
	base_size = ft_base_check(base);
	if (base_size)
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		if (nbr == 0)
			ft_putchar(base[0]);
		while (nbr)
		{
			nbr_str[i] = nbr % base_size;
			nbr = nbr / base_size;
			i++;
		}
		while (i-- > 0)
			ft_putchar(base[nbr_str[i]]);
	}
}
/*
int	main(void)
{
	int	n = 83647;
	
	//ft_putnbr_base(n, "0123");
	ft_putnbr_base(n, "01234567");
	return (0);
}*/
