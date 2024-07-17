# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 14:32:07 by zech-chi          #+#    #+#              #
#    Updated: 2024/07/17 14:43:05 by zech-chi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = sed

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = main.cpp

HEADERS = 

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
