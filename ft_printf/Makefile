NAME = libftprintf.a

SRCS = ft_printf.c \
       pf.c \
       pointeur.c \
       unsign.c \
       low_hexa.c \
       uper_hexa.c

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

OBJS = ${SRCS:.c=.o}

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I ./

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${LIBFT} ${OBJS}
	cp ${LIBFT} ${NAME}
	ar -rcs ${NAME} ${OBJS}

${LIBFT}:
	make -C ${LIBFT_DIR}

all: ${NAME}

clean:
	rm -f ${OBJS}
	@make -C ${LIBFT_DIR} clean

fclean: clean
	rm -f ${NAME}
	@make -C ${LIBFT_DIR} fclean

re: fclean all

.PHONY: all clean fclean re
