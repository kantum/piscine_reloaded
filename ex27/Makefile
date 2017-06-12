NAME = ft_display_file

SRC = \
srcs/ft_display_file.c \
srcs/ft_putchar.c \
srcs/ft_putstr.c \

HEADERS = includes

all:$(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -I $(HEADERS) $(SRC) -o $(NAME)

clean:
	@/bin/rm -f 

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
