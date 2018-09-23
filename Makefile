NAME = libft.a
SRC = srcs/ft_*.c
OBJECT = ft_*.o
HEADER = /includes/*.h
all:
	gcc -Wall -Werror -Wextra -c $(SRC) -I $(HEADER)
	ar rc $(NAME) ft_*.o
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJECT)
fclean: clean
	/bin/rm -f $(NAME)
re:	fclean all
