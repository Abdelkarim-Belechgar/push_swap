SRC_FUNCTION = ./function/print/ft_putchar.c ./function/print/ft_putnbr.c ./function/print/ft_putstr.c\
			   ./function/operators/ft_push.c ./function/operators/ft_reverse.c\
			   ./function/operators/ft_rotate.c ./function/operators/ft_swap.c\
			   ./function/utils/ft_atoi.c ./function/utils/ft_duplicate.c ./function/utils/ft_error.c\
			   ./function/utils/ft_integer.c ./function/utils/ft_lstadd_back.c ./function/utils/ft_lstclear.c\
			   ./function/utils/ft_lstnew.c ./function/utils/ft_lstsize.c ./function/utils/ft_numeric.c\
			   ./function/utils/ft_skip_spaces.c ./function/utils/ft_split.c ./function/utils/ft_strcmp.c\

SRC_MANDATORY = ./mandatory/main.c ./mandatory/algorithme0.c ./mandatory/algorithme1.c\

SRC_BONUS = ./bonus/main_bonus.c ./bonus/utils_bonus.c\

OBJ_FUNCTION = $(SRC_FUNCTION:.c=.o)
OBJ_MANDATORY = $(SRC_MANDATORY:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

INCLUDE = ./function/include/

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = push_swap
NAME_BONUS = checker

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ_FUNCTION) $(OBJ_MANDATORY) 
	@$(CC) $(CFLAGS) -I$(INCLUDE) -o $(NAME) $(OBJ_FUNCTION) $(OBJ_MANDATORY)

bonus : $(NAME_BONUS)

$(NAME_BONUS): $(OBJ_FUNCTION) $(OBJ_BONUS)
	@$(CC) $(CFLAGS) -I$(INCLUDE) -o $(NAME_BONUS) $(OBJ_FUNCTION) $(OBJ_BONUS)

.c.o:
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o ${<:.c=.o}

clean:
	@$(RM) $(OBJ_FUNCTION) $(OBJ_MANDATORY) $(OBJ_BONUS)

fclean: clean
	@$(RM) $(NAME) $(NAME_BONUS)

re : fclean all

.PHONY: all clean fclean re bonus
