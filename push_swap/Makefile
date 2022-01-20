# COLORS
GREEN	= \033[1;32m
RED 	= \033[1;31m
ORANGE	= \033[1;33m
RESET	= \033[0m

NAME	=	push_swap

CC		=	cc
FLAGS	=	-Wall -Wextra -Werror

RM		=	rm -rf

FOLDER	=	src/

FILES	=	args_utils.c \
			push_swap.c \
			push.c \
			reverse_rotate.c \
			rotate.c \
			swap.c \
			utils.c

LIBFT	= ./libft/libft.a

SRC 	=	$(addprefix $(FOLDER), $(FILES))
OBJ 	=	$(SRC:.c=.o)

all: $(OBJ)
	@$(MAKE) -C ./libft
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT)
	@echo "[$(GREEN)created$(RESET)]: libft.a & $(NAME)"

clean:
	@$(MAKE) -C ./libft clean
	@$(RM) $(OBJ)
	@echo "[$(RED)deleted$(RESET)]: *.o files"

fclean: clean
	@$(MAKE) -C ./libft fclean
	@$(RM) $(NAME)
	@echo "[$(RED)deleted$(RESET)]: libft.a & $(NAME)"

re: fclean all

.PHONY: all clean fclean re