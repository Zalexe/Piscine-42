/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:21:45 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/17 14:27:15 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	ascii;

	if (nb < 10 && nb > -1)
	{
		ascii = nb + '0';
		ft_putchar(ascii);
	}
	else if (nb > -10 && nb < 0)
	{
		ft_putchar('-');
		ascii = nb * -1 + '0';
		ft_putchar(ascii);
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
		ft_putnbr(nb % 10);
	}
}
/*
int main()
{
	//ft_putnbr(2);
	//ft_putnbr(-4);
	//ft_putnbr(42);
	ft_putnbr(-2147483648);
	
	return (0);
}*/
