/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 15:00:25 by cmarrued          #+#    #+#             */
/*   Updated: 2024/11/05 15:00:27 by cmarrued         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>
#include "error_msg.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	print_error(int e)
{
	char *msg;

	if (e == 1)
		msg = ERROR_TOOFEW;
	else if (e == 2)
		msg = ERROR_TOOMANY;
	else
		msg = ERROR_NOTREAD;
	ft_putstr(msg);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		readed;
	char	buf[BUF_SIZE + 1];
	
	if (argc == 1)
		print_error(1);
	else if(argc > 2)
		print_error(2);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			print_error(3);
		else
		{
			while ((readed = read(fd, buf, BUF_SIZE)))
			{
				buf[readed] = '\0';
				ft_putstr(buf);
			}
			close(fd);
		}
	}
	return (0);
}
