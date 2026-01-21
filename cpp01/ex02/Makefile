# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/21 14:40:31 by gdelhota          #+#    #+#              #
#    Updated: 2026/01/21 14:43:16 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
