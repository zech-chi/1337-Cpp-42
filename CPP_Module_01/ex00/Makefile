# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/16 21:23:54 by zech-chi          #+#    #+#              #
#    Updated: 2024/07/16 22:08:13 by zech-chi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp Zombie.hpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
