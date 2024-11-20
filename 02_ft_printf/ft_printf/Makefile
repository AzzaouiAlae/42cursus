SRC = ft_count.c	ft_func_list.c	ft_is_error_occurred.c	ft_print_char.c	ft_print_lowercase_hex.c	ft_print_prt.c	ft_print_str.c	ft_print_uppercase_hex.c	ft_printf.c	ft_putnbr.c	ft_putunbr.c
OBJS := $(SRC:%.c=%.o)
FLAGS = -Wall	-Werror	-Wextra
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	cc -I. $(FLAGS) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

.SECONDARY: $(OBJS)