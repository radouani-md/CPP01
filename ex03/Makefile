NAME = weapon

CFLAGS = -Wextra -Wall -Werror -std=c++98

CC = c++

SRC =  main.cpp HumanB.cpp HumanA.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp HumanB.hpp HumanA.hpp Weapon.hpp
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all