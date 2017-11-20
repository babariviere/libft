NAME=libft.a
NAME_DBG=libftdbg.a
SRC=$(wildcard src/*.c)
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
	@norminette $(SRC)

debug: $(NAME_DBG)

clean:
	@rm -rf obj
	@rm -rf obj_dbg

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME_DBG)

re: fclean all
