NAME = convert
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
SANITIZE = -fsanitize=address
RM = rm -f
SCRIPT_SRC = script.sh

SRC = Convert.cpp\

MAIN = main.cpp

$(NAME):
	$(CC) $(CFLAGS) $(SANITIZE) $(MAIN) $(SRC) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(NAME)

fclean:	clean
		$(RM) $(NAME)

re: clean all

leaks: re
	$(CC) $(CFLAGS) $(MAIN) $(SRC) -o $(NAME)
	./$(NAME)

test: re
	$(re) ./$(NAME)

s: re
	$(re) ./$(SCRIPT_SRC)

san: fclean 
	$(fclean)
	$(CC) $(CFLAGS) $(SANITIZE) $(MAIN) $(SRC) -o $(NAME)
	./$(NAME)

.PHONY:	all clean fclean re test
