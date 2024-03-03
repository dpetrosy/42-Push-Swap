NAME			:= push_swap 
MKDIR			:= mkdir -p
CC				:= cc
INCLUDES 		= -Iincludes -Ilibft -Ift_printf/include
CFLAGS			= -Wall -Wextra -Werror
SRCS_DIR		= srcs
SRCS			= $(wildcard $(SRCS_DIR)/*.c)
OBJS_DIR		= objs
OBJS			= $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))
LIBFT_A			= libft.a
LIBFT_DIR		= libft/
LIBFT_FLAGS		= -lft -L $(LIBFT_DIR)
FT_PRINTF_A		= libftprintf.a
FT_PRINTF_DIR	= ft_printf/
FT_PRINTF_FLAGS	= -lftprintf -L $(FT_PRINTF_DIR)
RM				= rm -rf

RESET			= "\033[0m"
BLACK    		= "\033[30m"    # Black
RED      		= "\033[31m"    # Red
GREEN    		= "\033[32m"    # Green
YELLOW   		= "\033[33m"    # Yellow
BLUE     		= "\033[34m"    # Blue
MAGENTA  		= "\033[35m"    # Magenta
CYAN     		= "\033[36m"    # Cyan
WHITE    		= "\033[37m"    # White

all : $(NAME)

$(NAME) : $(OBJS)
	@echo $(GREEN) " - Making libft..." $(RESET)
	make -C $(LIBFT_DIR)
	@echo $(BLUE) " - Made libft!" $(RESET)
	@echo $(GREEN) " - Making printf..." $(RESET)
	make -C $(FT_PRINTF_DIR)
	@echo $(BLUE) " - Made printf!" $(RESET)
	@echo $(MAGENTA) " - Compiling $(NAME)..." $(RESET)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_FLAGS) $(FT_PRINTF_FLAGS) -o $(NAME)
	@echo $(BLUE)"- Compiling FINISHED"$(RESET)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c | $(OBJS_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_DIR) :
	$(MKDIR) $(OBJS_DIR)

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)
	make -C $(LIBFT_DIR) fclean
	make -C $(FT_PRINTF_DIR) fclean
	@echo $(RED) " - Cleaned!" $(RESET)

re: fclean all

.PHONY: all clean fclean re
