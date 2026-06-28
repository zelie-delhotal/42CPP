# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gdelhota <gdelhota@student.42perpignan.fr  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/26 21:42:28 by gdelhota          #+#    #+#              #
#    Updated: 2026/06/28 02:27:58 by gdelhota         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrats

CXX = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_DIR = srcs/

OBJ_DIR = objs/

INCLUDES = includes/

SRCS = Bureaucrat.cpp AForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp main.cpp

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

.PHONY: all clean fclean re
