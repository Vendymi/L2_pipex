NAME = pipex

CC = cc

CFLAGS = -Werror -Wall -Wextra

RM = rm -rf

#includes
INCS 		= 	-I/user/include \
				libft/libft.a

#sources
SRC 	= 		pipex.c \
				utils.c

#objects
OBJ_PATH 	= 	obj/
OBJ 		= 	$(SRC:.c=.o)
OBJS 		= 	$(addprefix $(OBJ_PATH), $(OBJ))

.PHONY: all
all: libft/libft.a $(OBJ_PATH) $(NAME)

libft/libft.a:
	@make -s -C ./libft

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

$(OBJ_PATH)%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@



$(NAME): $(OBJS)
	@echo "$(BOLD)[ 🙊 Compiling shit together... ]$(NC)"
	@$(CC) $(CFLAGS) $(OBJS) $(INCS) -o $(NAME)
	@echo "$(BOLD)[ 🪄 Program ready! ]$(NC)"

clean :
	@$(RM) $(OBJS)
	@make clean -s -C ./libft
	@echo "$(BOLD)[ 🙊 Cleaning objects... Done... ]$(NC)"

fclean : clean
	@echo "$(BOLD)[ 🙊 Cleaning... ]$(NC)"
	@$(RM) $(NAME)
	@make fclean -s -C libft
	@echo "$(BOLD)[ 🙊 Done... ]$(NC)"

re : fclean all
