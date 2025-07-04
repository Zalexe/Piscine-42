/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:55:27 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/28 10:55:30 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqr_while(int nb, int start, int end)
{
	int	mid;

	if (start > end)
		return (0);
	mid = (start + end) / 2;
	if (mid * mid == nb)
		return (mid);
	if (mid * mid < nb)
		return (ft_sqr_while(nb, mid + 1, end));
	else
		return (ft_sqr_while(nb, start, mid - 1));
}

int	ft_sqrt(int nb)
{
	int	start;
	int	end;
	int	ans;

	start = 0;
	if (nb < 2)
		end = nb;
	else
		end = nb / 2;
	ans = 0;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	ans = ft_sqr_while(nb, start, end);
	return (ans);
}
/*
int	main(void)
{
	int x = 28;
	x = ft_sqrt(x);
	printf("%d\n", x);
	return (0);
}

int	ft_sqrt(int nb)
{
	int	start;
	int	end;
	int	mid;
	int	ans;

	start = 0;
	end = nb / 2;
	ans = 0;
	if (nb == 0 || nb == 1)
		return (nb);
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == nb)
			return (mid);
		if (mid * mid < nb)
		{
			start = mid +1;
			ans = mid;
		}
		else
			end = mid - 1;
	}
	if ((ans * ans) != nb)
		return (0);
	return (ans);
}*/
