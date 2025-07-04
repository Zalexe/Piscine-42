# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cmarrued <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 11:07:05 by cmarrued          #+#    #+#              #
#    Updated: 2024/11/04 11:14:31 by cmarrued         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash/
gcc -c -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a *.o
ranlib libft.a
