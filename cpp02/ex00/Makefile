# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/22 05:15:32 by gdelhota          #+#    #+#              #
#    Updated: 2026/01/22 06:28:06 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

CXX = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Fixed.cpp

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
