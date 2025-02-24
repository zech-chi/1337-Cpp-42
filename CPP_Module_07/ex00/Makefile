# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 15:50:40 by zech-chi          #+#    #+#              #
#    Updated: 2025/02/24 15:50:41 by zech-chi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp whatever.cpp 

HEADERS = whatever.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADERS)
	c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	c++ $(FLAGS) $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
