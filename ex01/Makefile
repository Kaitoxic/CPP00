CXX = c++
OUT = main.o PhoneBook.o Contact.o
CXXFLAGS = -Wall -Werror -Wextra -g3 -std=c++98 -I .
SRC = main.cpp PhoneBook.cpp Contact.cpp
NAME = phonebook

all: $(NAME)

$(NAME): $(OUT)
	$(CXX) $(OUT) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OUT)

fclean: clean
	rm -f $(NAME)

re: fclean all