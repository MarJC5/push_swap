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

FILES	=	push_swap.c

LIBFT	= ./libft/libft.a

SRC 	=	$(addprefix $(FOLDER), $(FILES))
OBJ 	=	$(SRC:.c=.o)

all: $(SERVER) $(CLIENT)
	@$(MAKE) -C ./libft
	@$(CC) $(CFLAGS) $(LIBFT) $(FILES) -o $(NAME)
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