/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:15:52 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/24 10:15:54 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb > -1)
	{
		ft_putchar((nb + '0'));
	}
	else if (nb > -10 && nb < 0)
	{
		ft_putchar('-');
		ft_putchar((nb * -1 + '0'));
	}
	else if (nb <= -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else
	{
		ft_putnbr(nb / 10);
		if (nb < 0)
			nb *= -1;
		ft_putnbr(nb % 10);
	}
}
/*
int	main(void)
{
	int	n = 2147483647;
	
	ft_putnbr(n);
	return (0);
}*/
