# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/08 17:58:23 by hsamira           #+#    #+#              #
#    Updated: 2026/02/12 12:31:49 by hsamira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXX = c++

CXXFLAG = -Wall -Werror -Wextra -std=c++98

SRC =  Fixed.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

clean: 
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY : re all clean fclean