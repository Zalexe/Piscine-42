CC		= cc
CFLAGS	= -Wall -Wextra -Werror

NAME	= ft_display_file

SRCS	= ft_display_file.c 
INCS	= error_msg.h
OBJS	= ${SRCS:.c=.o}

RM		= rm -f

all:		${NAME}

%.o: %.c	
			${CC} ${CFLAGS} $< -o $@ -I ${INCS}

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} $< -o $@ -I ${INCS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o
