NAME = megaphone

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CPP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CPP) $(FLAGS) $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean re
