/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:07:07 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/17 11:15:28 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb2(void)
{
	int	digit1;
	int	digit2;

	digit1 = '0';
	while (digit1 <= '9')
	{
		digit2 = '0';
		while (digit2 <= '9')
		{
			write (1, &digit1, 1);
			write (1, &digit2, 1);
			if (digit1 != '9' || digit2 != '9')
			{
				write(1, ", ", 2);
			}
			digit2++;
		}
		digit1++;
	}
}
/*
int main()
{
	ft_print_comb2();

	return (0);
}
*/
