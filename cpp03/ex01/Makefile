# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/22 05:15:32 by gdelhota          #+#    #+#              #
#    Updated: 2026/01/23 15:22:43 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavtrap

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJ_DIR = objs/

SRC_DIR = srcs/

SRCS = ClapTrap.cpp ScavTrap.cpp main.cpp

OBJS = $(SRCS:%.cpp=%.o)

OBJS := $(addprefix $(OBJ_DIR), $(OBJS))

SRCS := $(addprefix $(SRC_DIR), $(SRCS))

INCLUDES = includes/

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(@D)
	$(CXX) $(CPPFLAGS) -I$(INCLUDES) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) -I$(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
