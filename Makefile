# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: denpolat <denpolat@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/03 03:40:27 by denpolat          #+#    #+#              #
#    Updated: 2026/07/03 03:52:21 by denpolat         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_SERVER = server
NAME_CLIENT = client

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = libft
PRINTF_DIR = ft_printf

LIBFT = $(LIBFT_DIR)/libft.a
LIBFTPRINTF = $(PRINTF_DIR)/libftprintf.a

INCLUDES = -I. -I$(LIBFT_DIR) -I$(PRINTF_DIR)

SRC_DIR = src

SRC_SERVER = $(SRC_DIR)/server.c
SRC_CLIENT = $(SRC_DIR)/client.c

OBJ_SERVER = $(SRC_SERVER:.c=.o)
OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

all: $(NAME_SERVER) $(NAME_CLIENT)

$(LIBFT):
	make -C $(LIBFT_DIR)

$(LIBFTPRINTF):
	make -C $(PRINTF_DIR)

$(NAME_SERVER): $(OBJ_SERVER) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(OBJ_SERVER) $(LIBFTPRINTF) -o $(NAME_SERVER)

$(NAME_CLIENT): $(OBJ_CLIENT) $(LIBFTPRINTF)
	$(CC) $(CFLAGS) $(OBJ_CLIENT) $(LIBFTPRINTF) -o $(NAME_CLIENT)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	make -C $(LIBFT_DIR) clean
	make -C $(PRINTF_DIR) clean
	rm -f $(OBJ_SERVER) $(OBJ_CLIENT)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	make -C $(PRINTF_DIR) fclean
	rm -f $(NAME_SERVER) $(NAME_CLIENT)

re: fclean all

.PHONY: all clean fclean re
