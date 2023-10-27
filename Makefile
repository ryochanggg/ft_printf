NAME = libftprintf.a

FILES = 		ft_print_c.c\
                ft_print_di.c\
				ft_print_largex.c\
				ft_print_p.c\
				ft_print_percent.c\
				ft_print_s.c\
				ft_print_u.c\
				ft_print_x.c\
				ft_printf.c\
				ft_put16nbr.c\
				ft_put16Xnbr.c\
				ft_putchar_fd.c\
				ft_putnbr_fd.c\
				ft_putunbr.c\
				ft_strlen.c\

OBJS = $(FILES:.c=.o)

CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

.c.o: $(OBJS)
	$(CC) $(CFLAG) $(INCLUDE) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus clean fclean re all