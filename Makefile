NAME = push_swap
SRC = main.c stack.c
OBJ = $(SRC:.c=.o)
CC = cc -g
RM = rm -rf
ARC = ar -rcs
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I include
LIBFT = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	@$(CC) $(CFLAGS) $(OBJ) $(INCLUDE) libft/$(LIBFT) -o $(NAME)

clean:
	@make clean -C libft
	$(RM) $(OBJ)

fclean: clean
	@make fclean -C libft
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
