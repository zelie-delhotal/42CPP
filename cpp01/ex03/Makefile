# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/21 16:56:43 by gdelhota          #+#    #+#              #
#    Updated: 2026/01/21 16:58:05 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = violence

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


SRC_DIR = srcs/

OBJ_DIR = objs/

INCLUDES = includes


SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

OBJS = $(SRCS:%.cpp=%.o)

OBJS := $(addprefix $(OBJ_DIR), $(OBJS))

SRCS := $(addprefix $(SRC_DIR), $(SRCS))


$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
