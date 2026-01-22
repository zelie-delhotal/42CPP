# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/22 05:15:32 by gdelhota          #+#    #+#              #
#    Updated: 2026/01/22 14:54:56 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Fixed.cpp main.cpp

OBJS = $(SRCS:%.cpp=%.o)

INCLUDES = includes/

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -I$(INCLUDES) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CPPFLAGS) -I$(INCLUDES) $(OBJS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -rf $(OBJS)

re: fclean all

.PHONY: all clean fclean re
