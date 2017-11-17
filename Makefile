NAME=libft.a
NAME_DBG=libftdbg.a
SRC_NAME=ft_memset.c ft_bzero.c ft_putchar.c ft_putstr.c\
		 ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c\
		 ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c\
		 ft_strncat.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strstr.c\
		 ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c\
		 ft_isalpha.c ft_isdigit.c ft_isalnum.c\
		 ft_isascii.c ft_isprint.c ft_islower.c ft_isupper.c ft_iswhitespace.c ft_tolower.c\
		 ft_toupper.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c\
		 ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c\
		 ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c\
		 ft_strsplit.c ft_itoa.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c\
		 ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c\
		 ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_lstlen.c ft_lstfind.c\
		 ft_lstpush.c ft_argparse.c
SRC=$(addprefix src/, $(SRC_NAME))
OBJ=$(patsubst src/%.c, obj/%.o, $(SRC))
OBJ_DBG=$(patsubst src/%.c, obj_dbg/%.o, $(SRC))
CC=clang
CFLAGS=-Wall -Wextra -Werror -Iincludes

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(NAME_DBG): $(OBJ_DBG)
	ar rcs $(NAME_DBG) $(OBJ_DBG)

obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

obj_dbg/%.o: src/%.c
	@mkdir -p obj_dbg
	$(CC) $(CFLAGS) -g -c $< -o $@

norme:
	@norminette $(SRC) src/*.h

debug: $(NAME_DBG)

clean:
	@rm -rf obj
	@rm -rf obj_dbg

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME_DBG)

re: fclean all
