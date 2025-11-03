CXX = clang++
OUT = megaphone.o
CXXFLAGS = -Wall -Werror -Wextra -g3 -std=c++98 -I .
SRC = megaphone.cpp
NAME = megaphone

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