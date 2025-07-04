/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:34:39 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/21 10:34:41 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;
	
	a = 23;
	b = 4;
	
	ft_div_mod(a, b, &div, &mod);
	printf("a:%d,b:%d,div:%d,mod:%d", a, b, div, mod);
}*/
