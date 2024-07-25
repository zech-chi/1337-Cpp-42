# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zech-chi <zech-chi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/23 21:48:00 by zech-chi          #+#    #+#              #
#    Updated: 2024/07/24 11:40:29 by zech-chi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = diamond_trap

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = ClapTrap.cpp  DiamondTrap.cpp  FragTrap.cpp  main.cpp  ScavTrap.cpp

HEADERS = ClapTrap.hpp  DiamondTrap.hpp  FragTrap.hpp  ScavTrap.hpp

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
