NAME			:= push_swap
CC				:= cc
CFLAGS			:= -Wall -Wextra -Werror -g -fsanitize=address

LIBFT_DIR		:= libft
LIBFT_FLAGS		:= -lft -L $(LIBFT_DIR)
FT_PRINTF_DIR	:= ft_printf
FT_PRINTF_FLAGS	:= -lftprintf -L $(FT_PRINTF_DIR)

INCLUDES_DIR 	:= includes
INCLUDES_FLAG 	:= -I$(INCLUDES_DIR) -I$(LIBFT_DIR) -I$(FT_PRINTF_DIR)/includes
INCLUDES		:= $(wildcard $(INCLUDES_DIR)/*.h) $(LIBFT_DIR)/libft.h \
				   $(FT_PRINTF_DIR)/includes/ft_printf.h

SRCS_DIR		:= srcs
SRCS			:= $(wildcard $(SRCS_DIR)/*.c)
OBJS_DIR		:= objs
OBJS			:= $(patsubst $(SRCS_DIR)/%.c, $(OBJS_DIR)/%.o, $(SRCS))
MAKE			:= make -sC
MKDIR			:= mkdir -p
RM				:= rm -rf

RESET			:= "\033[0m"
BLACK    		:= "\033[30m"    # Black
RED      		:= "\033[31m"    # Red
GREEN    		:= "\033[32m"    # Green
YELLOW   		:= "\033[33m"    # Yellow
BLUE     		:= "\033[34m"    # Blue
MAGENTA  		:= "\033[35m"    # Magenta
CYAN     		:= "\033[36m"    # Cyan
WHITE    		:= "\033[37m"    # White

all : $(NAME)

$(NAME) : $(OBJS)
	@echo $(CYAN) " - Making libft..." $(RESET)
	@$(MAKE) $(LIBFT_DIR)
	@echo $(YELLOW) " - Made libft!" $(RESET)
	@echo $(CYAN) " - Making printf..." $(RESET)
	@$(MAKE) $(FT_PRINTF_DIR)
	@echo $(YELLOW) " - Made printf!" $(RESET)
	@echo $(GREEN) " - Compiling $(NAME)..." $(RESET)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT_FLAGS) $(FT_PRINTF_FLAGS) -o $(NAME)
	@echo $(YELLOW) " - Compiling FINISHED" $(RESET)

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c $(INCLUDES) | $(OBJS_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES_FLAG) -c $< -o $@

$(OBJS_DIR) :
	@$(MKDIR) $(OBJS_DIR)

clean :
	@$(RM) $(OBJS_DIR)
	@echo $(RED) " - Cleaned!" $(RESET)

fclean : clean
	@$(RM) $(NAME)
	@$(MAKE) $(LIBFT_DIR) fclean
	@$(MAKE) $(FT_PRINTF_DIR) fclean
	@echo $(RED) " - Full Cleaned!" $(RESET)

re: fclean all

.PHONY: all clean fclean re
