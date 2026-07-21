# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota@student.42perpignan.fr            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/19 14:37:52 by gdelhota          #+#    #+#              #
#    Updated: 2026/07/21 10:34:07 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = srcs

INCLUDES = includes

OBJ_DIR  = objs

SRCS = main.cpp BitcoinExchange.cpp

OBJS = $(SRCS: %.cpp=%.o)

SRCS:= $(addprefix $(SRC_DIR), $(SRCS))

OBJS:= $(addprefix $(OBJ_DIR), $(OBJS))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	mkdir -p $(@D)
	$(CXX) $(CPPFLAGS) -I$(INCLUDES) -c <$ -o <@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) -I$(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all
