# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/22 01:19:56 by gdelhota          #+#    #+#              #
#    Updated: 2026/01/22 02:02:38 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = srcs/
OBJ_DIR = objs/
INCLUDES = includes/

SRCS = main.cpp

OBJS = $(SRCS:%.cpp=%.o)

OBJS:= $(addprefix $(OBJ_DIR), $(OBJS))

SRCS:= $(addprefix $(SRC_DIR), $(SRCS))

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	mkdir -p $(@D)
	$(CXX) $(CPPFLAGS) -I$(INCLUDES) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
