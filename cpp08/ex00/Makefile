# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/10 21:13:56 by gdelhota          #+#    #+#              #
#    Updated: 2026/07/14 17:07:42 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

INCLUDES = include/

SRC_DIR = srcs/

OBJ_DIR = objs/

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

OBJS:= $(addprefix $(OBJ_DIR), $(OBJS))

SRCS:= $(addprefix $(SRC_DIR), $(SRCS))


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
