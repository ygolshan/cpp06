# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 16:30:19 by ygolshan          #+#    #+#              #
#    Updated: 2024/02/17 12:41:34 by ygolshan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identity

CXX = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 

SRC =	Base.cpp Identify.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)