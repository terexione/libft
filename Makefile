NAME = libft.a
SRC = srcs/ft_bzero.c srcs/ft_memcpy.c srcs/ft_memmove.c srcs/ft_memset.c srcs/ft_putstr.c
OBJECT = ft_*.o
HEADER = /includes/libft.h
all:
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(HEADER)
	ar rc $(NAME) ft_*.o
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJECT)
fclean: clean
	/bin/rm -f $(NAME)
re:	fclean all
