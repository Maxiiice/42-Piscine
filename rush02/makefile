# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mwalter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/19 10:03:50 by mwalter           #+#    #+#              #
#    Updated: 2025/07/20 15:28:46 by mwalter          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

EXEC = rush-02

SRCS = main.c rush02.h

SRCDIR = fonctions
HEADDIR = include

SRC = $(wildard $(SRCDIR)/*.c)

OBJS = ${SRCS:.c=.o}

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rn -r $(NAME)

re: fclean all
