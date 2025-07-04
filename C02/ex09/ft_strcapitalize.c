/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <cmarrued@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:00:16 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/22 14:00:18 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			if (cap == 1){
				str[i] -= 32;
				cap = 0;
			}
		}
		else if (str[i] > 96 && str[i] < 123)
		{
			cap = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			cap = 0;
		}
		else if ((str[i] < 'a' || str[i] > 'z') && cap == 0)
		{
			cap = 1;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[50] = "salut, comment tu vas ? 42mots quarante-deux;";
	char	str1[] = "daffvon,odafsficj,dfc adsga123kl43lo+w-ffa%cdj*f$jk";
	ft_strcapitalize(str);
	ft_strcapitalize(str1);
	printf("str=%s\n", str );
	printf("str1=%s\n", str1 );
	return (0);
}
