NAME = push_swap
SRC = aditionalmoves.c choice.c conditions.c \
		ft_strdup.c main.c moves.c normalice.c \
		sort.c split.c utils.c utils2.c
AR = gcc -o
CCFLAGS = -Wall -Werror -Wextra
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "Se ha compilado perfectamente ✅"

clean:
	@rm -rf *.o
	@echo "Se ha borrado todo :D"

fclean: clean
	@rm -f $(NAME)

%.o: %.c
	@gcc $(CCFLAGS) -o $@ -c $<

re: fclean all

.PHONY: all fclean clean re
