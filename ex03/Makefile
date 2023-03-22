NAME = Violence

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
	HumanA.cpp \
	HumanB.cpp \
	Weapon.cpp \

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	$(CC) $(FLAGS) -c

all : $(NAME)

$(NAME) : $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

fclean : 
	rm -rf $(NAME)

re : fclean
	make all