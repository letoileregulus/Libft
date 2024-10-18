NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
OBJ = $(SRC:.c=.o)
LIBC = ar rc
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBC) $(NAME) $(OBJ)
	
clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re