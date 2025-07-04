/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:19:31 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/21 11:19:33 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	reverse;

	n = 0;
	while (n < size / 2)
	{
		reverse = tab[n];
		tab[n] = tab[size - n - 1];
		tab[size - n - 1] = reverse;
		n++;
	}
}
/*
int	main(void)
{
	int	n;
	int tab[5] = {0, 1, 2, 3, 4};
	n = 5;
	ft_rev_int_tab(tab, n);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]); 
	return (0);
}*/
