NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRC = srcs/ft_lstadd.c srcs/ft_lstdel.c srcs/ft_lstiter.c srcs/ft_lstdelone.c srcs/ft_lstmap.c srcs/ft_lstnew.c srcs/ft_putnbr_fd.c srcs/ft_putendl_fd.c srcs/ft_putstr_fd.c srcs/ft_putchar_fd.c srcs/ft_putnbr.c srcs/ft_putendl.c srcs/ft_putchar.c srcs/ft_itoa.c srcs/ft_strsplit.c srcs/ft_strtrim.c srcs/ft_strjoin.c srcs/ft_strsub.c srcs/ft_strnequ.c srcs/ft_strequ.c srcs/ft_strmapi.c srcs/ft_strmap.c srcs/ft_striteri.c srcs/ft_striter.c srcs/ft_strclr.c srcs/ft_strdel.c srcs/ft_memdel.c srcs/ft_strnew.c srcs/ft_memalloc.c srcs/ft_atoi.c srcs/ft_isprint.c srcs/ft_memset.c srcs/ft_strdup.c srcs/ft_strnstr.c srcs/ft_bzero.c srcs/ft_memccpy.c srcs/ft_putstr.c srcs/ft_strlcat.c srcs/ft_strrchr.c srcs/ft_isalnum.c srcs/ft_memchr.c srcs/ft_strcat.c srcs/ft_strlen.c srcs/ft_strstr.c srcs/ft_isalpha.c srcs/ft_memcmp.c srcs/ft_strchr.c srcs/ft_strncat.c srcs/ft_tolower.c srcs/ft_isascii.c srcs/ft_memcpy.c srcs/ft_strcmp.c srcs/ft_strncmp.c srcs/ft_toupper.c srcs/ft_isdigit.c srcs/ft_memmove.c srcs/ft_strcpy.c srcs/ft_strncpy.c

OBJECT = ft_*.o
HEADER = /includes/libft.h
all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC) -I $(HEADER)
	ar rc $(NAME) ft_*.o
	ranlib $(NAME)
so:
	gcc $(CFLAGS) -g -fPIC $(SRC) -shared -pedantic -o libft.so
clean:
	/bin/rm -f $(OBJECT)
fclean: clean
	/bin/rm -f $(NAME)
re:	fclean all
