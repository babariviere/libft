NAME=libft.a
NAME_DBG=libftdbg.a
SRC_NAME=\
	ft_add_fmt_str.c ft_atoi.c ft_bzero.c ft_calibrate_fmt.c\
	ft_calibrate_fmt_range.c ft_dlstadd.c ft_dlstdel.c ft_dlstdelone.c\
	ft_dlstfilter.c ft_dlstfind.c ft_dlstget.c ft_dlstiter.c ft_dlstlen.c\
	ft_dlstmap.c ft_dlstnew.c ft_dlstnew_mv.c ft_dlstpush.c ft_free_fmt.c ft_gnl.c\
	ft_human_metric_bin.c ft_human_metric_dec.c ft_init_fmt.c ft_isalnum.c\
	ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c\
	ft_iswhitespace.c ft_itoa.c ft_tabjoin.c ft_lstadd.c ft_lstdel.c ft_lstdelone.c\
	ft_lstfilter.c ft_lstfind.c ft_lstget.c ft_lstiter.c ft_lstlen.c ft_lstmap.c\
	ft_lstnew.c ft_lstnew_mv.c ft_lstpush.c ft_memalloc.c ft_memccpy.c ft_memchr.c\
	ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memset.c ft_numlen.c\
	ft_pow.c ft_print_fmt.c ft_putchar.c ft_putchar_fd.c ft_putchar_mul.c\
	ft_putendl.c ft_putendl_fd.c ft_puterr.c ft_putnbr.c ft_putnbr_base.c\
	ft_putnbr_bin.c ft_putnbr_fd.c ft_putnbr_hex.c ft_putnbr_octal.c ft_putstr.c\
	ft_putstr_fd.c ft_sort_fmts.c ft_sqrt.c ft_stoa_human.c ft_strcat.c ft_strchr.c\
	ft_strclr.c ft_strcmp.c ft_strcmp_rev.c ft_strcpy.c ft_strdedup.c ft_strdel.c\
	ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strjoin_sep.c\
	ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c\
	ft_strncpy.c ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strremove.c\
	ft_strsort.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_swap.c\
	ft_swap_ptr.c ft_tablen.c ft_tolower.c ft_toupper.c ft_strchr_esc.c\
	ft_env_get.c ft_env_set.c ft_realloc.c ft_env_init.c ft_print_tab.c\
	ft_env_set_ent.c ft_env_rm.c
SRC=$(addprefix src/, $(SRC_NAME))
OBJ=$(patsubst src/%.c, obj/%.o, $(SRC))
OBJ_DBG=$(patsubst src/%.c, obj_dbg/%.o, $(SRC))
CC=clang
CFLAGS=-Wall -Wextra -Werror -Iinclude
OPTI=-O3

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(NAME_DBG): $(OBJ_DBG)
	ar rcs $(NAME_DBG) $(OBJ_DBG)

obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) $(OPTI) -c $< -o $@

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
