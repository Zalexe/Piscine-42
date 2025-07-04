/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:04:41 by cmarrued          #+#    #+#             */
/*   Updated: 2024/10/23 11:04:43 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_ln(char *c)
{
	unsigned int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	dest_ln;
	unsigned int	src_ln;
	unsigned int	space;
	unsigned int	i;

	dest_ln = ft_ln(dest);
	src_ln = ft_ln(src);
	i = 0;
	if (dest_ln == 0 || src_ln >= nb)
		return (dest_ln + src_ln);
	space = nb - dest_ln -1;
	while (i < space && src[i] != '\0')
	{
		dest[dest_ln + i] = src[i];
		i++;
	}
	dest[dest_ln + i] = '\0';
	return (dest_ln + src_ln);
}
/*
int	main(void)
{
	char	dest[30] = "hola buenos dias";
	char	src[] = "adios";	
	
	printf("longitud nueva total:%u\n", ft_strlcat(dest, src, 10));
	printf("%s\n", dest);
	return (0);
}*/
