NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRC = btree_apply_infix.c btree_apply_prefix.c btree_apply_suffix.c btree_create_node.c btree_insert_data.c btree_level_count.c btree_create_node.c ft_llabs.c ft_labs.c ft_div.c ft_abs.c ft_swap.c ft_lstadd.c ft_lstdel.c ft_lstiter.c ft_lstdelone.c ft_lstmap.c ft_lstnew.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr.c ft_putendl.c ft_putchar.c ft_itoa.c ft_strsplit.c ft_strtrim.c ft_strjoin.c ft_strsub.c ft_strnequ.c ft_strequ.c ft_strmapi.c ft_strmap.c ft_striteri.c ft_striter.c ft_strclr.c ft_strdel.c ft_memdel.c ft_strnew.c ft_memalloc.c ft_atoi.c ft_isprint.c ft_memset.c ft_strdup.c ft_strnstr.c ft_bzero.c ft_memccpy.c ft_putstr.c ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_memchr.c ft_strcat.c ft_strlen.c ft_strstr.c ft_isalpha.c ft_memcmp.c ft_strchr.c ft_strncat.c ft_tolower.c ft_isascii.c ft_memcpy.c ft_strcmp.c ft_strncmp.c ft_toupper.c ft_isdigit.c ft_memmove.c ft_strcpy.c ft_strncpy.c

OBJECT = *.o
HEADER = /includes/libft.h
all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -c $(SRC) -I $(HEADER)
	@ar rc $(NAME) ft_*.o
	@ranlib $(NAME)
clean:
	/bin/rm -f $(OBJECT)
fclean: clean
	/bin/rm -f $(NAME)
re:	fclean all
