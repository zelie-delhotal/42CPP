# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/23 02:11:16 by gdelhota          #+#    #+#              #
#    Updated: 2026/01/23 02:20:19 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animal

CXX = x++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = srcs/

OBJ_DIR = objs/

INCLUDES = includes/

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp

OBJS = $(SRCS:%.cpp=%.o)

OBJS:= $(addprefix $(OBJ_DIR), $(OBJS))

SRCS:= $(addprefix $(SRC_DIR), $(SRCS))

$(OBJ_DIR)%.o: %(SRC_DIR)%.cpp
	mkdir -p $(@D)
	$(CXX) $(CPPFLAGS) -I$(INCLUDES) -o $< -c $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) -o $(OBJS) -c $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
