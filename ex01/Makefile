# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsamira <hsamira@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/02 12:03:47 by hsamira           #+#    #+#              #
#    Updated: 2026/04/02 15:12:02 by hsamira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter

CXX = c++

CXXFLAG = -Wall -Werror -Wextra -std=c++98 -MMD -MP

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

DEPS = $(SRC:.cpp=.d)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CXX) $(CXXFLAG) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CXX) $(CXXFLAG) -c $< -o $@

clean:
	rm -f $(OBJ)
	rm -f $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
-include $(DEPS)
	