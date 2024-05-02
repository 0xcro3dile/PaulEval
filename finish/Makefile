NAME = push_swap

CC = cc

FLAGS = -Wall -Werror -Wextra

SRC =	push_swap.c \
		sorting_algo/ft_sqrt.c sorting_algo/medium_sort.c sorting_algo/small_sort.c sorting_algo/big_sort.c sorting_algo/init_sort.c \
		error_handeling/ft_duplicates.c error_handeling/ft_error.c error_handeling/liberator.c error_handeling/sort_check.c \
		sorting_operations/push.c sorting_operations/reverse_rotate.c \
		sorting_operations/rotate.c sorting_operations/swap.c \
		stack_creation/ft_atoi.c stack_creation/ft_free_str.c stack_creation/ft_isdigit.c \
		stack_creation/ft_lstadd_back.c stack_creation/ft_lstnew.c stack_creation/ft_lstsize.c \
		stack_creation/ft_split.c stack_creation/ft_strlcpy.c stack_creation/insert_index.c \
		stack_creation/stack_generator.c stack_creation/ft_lstlast.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@echo "Compiled successfully: $(NAME)"

all: $(NAME)

clean:
	@rm -f $(OBJ)
	@echo "Objectfiles removed"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean re