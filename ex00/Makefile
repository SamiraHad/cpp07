# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/02 11:53:10 by hsamira           #+#    #+#              #
#    Updated: 2026/04/02 14:44:14 by hsamira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Whatever

CXX = c++

CXXFLAG = -Wall -Wextra -Werror -std=c++98 -MMD -MP

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

DEPS = $(SRC:.cpp=.d)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -f $(DEPS)
	
fclean: clean
	rm -f $(NAME)
	
re : fclean all

.PHONY: re all clean fclean
-include $(DEPS)


