# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 10:20:34 by zech-chi          #+#    #+#              #
#    Updated: 2024/07/17 14:33:11 by zech-chi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = weapon

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

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
