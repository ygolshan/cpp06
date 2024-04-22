# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygolshan <ygolshan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/16 16:25:49 by ygolshan          #+#    #+#              #
#    Updated: 2024/02/17 12:32:56 by ygolshan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CXX = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 

SRC =	ScalarConverter.cpp Converter.cpp main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) -o $(NAME) $(OBJ)
	
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)