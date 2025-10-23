NAME = file

CFLAGS = -Wextra -Wall -Werror  -fsanitize=address -g3 -std=c++98

CC = c++

SRC = main.cpp fileWork.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp fileWork.hpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all