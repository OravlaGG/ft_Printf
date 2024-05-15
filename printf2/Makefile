SRC =	ft_printf.c \
		ft_putchr_pf.c\
		ft_putstr_pf.c\
		ft_putdigit_pf.c\
		ft_putptr_pf.c\
		ft_putuns_pf.c

OBJS = ${SRC:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libftprintf.a

%.o: %.c
			${CC} -c ${CFLAGS} $?
all:	${NAME}

${NAME}:	${OBJS}
						ar rcs ${NAME} ${OBJS}
clean:
						rm -f ${OBJS}
fclean:		clean
						rm -f ${NAME}
re:			fclean all

.PHONY:		all clean fclean re