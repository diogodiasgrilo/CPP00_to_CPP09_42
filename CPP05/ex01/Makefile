NAME = bureaucrat_&_forms
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -Wno-shadow -Wshadow -std=c++98
SRC = Bureaucrat.cpp Form.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re