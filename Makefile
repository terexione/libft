NAME = libft.a
SRC = srcs/ft_atoi.c srcs/ft_isprint.c srcs/ft_memset.c srcs/ft_strdup.c srcs/ft_strnstr.c srcs/ft_bzero.c srcs/ft_memccpy.c srcs/ft_putstr.c srcs/ft_strlcat.c srcs/ft_strrchr.c srcs/ft_isalnum.c srcs/ft_memchr.c srcs/ft_strcat.c srcs/ft_strlen.c srcs/ft_strstr.c srcs/ft_isalpha.c srcs/ft_memcmp.c srcs/ft_strchr.c srcs/ft_strncat.c srcs/ft_tolower.c srcs/ft_isascii.c srcs/ft_memcpy.c srcs/ft_strcmp.c srcs/ft_strncmp.c srcs/ft_toupper.c srcs/ft_isdigit.c srcs/ft_memmove.c srcs/ft_strcpy.c srcs/ft_strncpy.c

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
