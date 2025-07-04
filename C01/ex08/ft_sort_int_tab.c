/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:38:22 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/21 11:38:25 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	swap;

	while (0 <= size)
	{
		n = 0;
		while (n < size - 1)
		{
			if (tab[n] > tab[n + 1])
			{
				swap = tab [n];
				tab[n] = tab [n + 1];
				tab [n + 1] = swap;
			}
			n++;
		}
		size--;
	}
}
/*
int	main(void)
{
	int	n;
	int tab[5] = {2, 1, 4, 0, 3};
	n = 5;
	ft_sort_int_tab(tab, n);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]); 
	return (0);
}*/
