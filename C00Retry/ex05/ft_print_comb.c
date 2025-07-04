/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:33:02 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/17 11:07:07 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	digit1;
	int	digit2;
	int	digit3;

	digit1 = '0';
	while (digit1 <= '7')
	{
		digit2 = digit1 + 1;
		while (digit2 <= '8')
		{
			digit3 = digit2 + 1;
			while (digit3 <= '9')
			{
				write(1, &digit1, 1);
				write(1, &digit2, 1);
				write(1, &digit3, 1);
				if (digit1 != '7')
					write (1, ", ", 2);
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
}
/*
int main()
{
	ft_print_comb();

	return (0);
}
*/
