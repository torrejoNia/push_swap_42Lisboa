
# BASIC
CC = cc -g
CFLAGS = -Wall -Wextra -Werror -g3
RM = rm -rf

#colors
RESET			:= \033[0m
GREEN			=	\e[32m
CYAN			:= \33[1;36m
YELLOW			=	\e[033m
RED				:= \033[1;31m
BOLD			:= \033[1;1m

# PUSH_SWAP
NAME = push_swap
SRCS =  sort_small.c \
        sort_simple.c \
        sort_radix.c \
        libft1.c \
        libft2.c \
        libft_lists.c \
		libft_ft_split.c \
        push.c \
        reverse.c \
        rotate.c \
        swap.c \
        error.c \
        utilities.c \
        validation.c \
        push_swap.c

OBJSDIR = objects
OBJS = $(addprefix $(OBJSDIR)/,$(SRCS:.c=.o))

# MAKE RULES
all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)$(BOLD)Creating executable...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(BOLD)Executable created!$(RESET)"
	
$(OBJSDIR)/%.o: %.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(YELLOW)$(BOLD)Removing objects...$(RESET)"
	$(RM) $(OBJSDIR)

fclean: clean
	@echo "$(RED)$(BOLD)Removing executable...$(RESET)"
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re