NAME=libft.a
NAME_DBG=libftdbg.a
NAME_SAN=libftsan.a
CHR_NAME=ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c\
		 ft_isprint.c ft_isupper.c ft_iswhitespace.c ft_tolower.c ft_toupper.c
DLST_NAME=ft_dlstadd.c ft_dlstdel.c ft_dlstdelone.c ft_dlstfilter.c ft_dlstfind.c\
		  ft_dlstget.c ft_dlstiter.c ft_dlstlen.c ft_dlstmap.c ft_dlstnew.c\
		  ft_dlstnew_mv.c ft_dlstpush.c
ENV_NAME=ft_env_get.c ft_env_init.c ft_env_rm.c ft_env_set.c ft_env_set_ent.c\
		 ft_env_load.c
FMT_NAME=ft_fmt_add_str.c ft_fmt_calibrate.c ft_fmt_calibrate_range.c ft_fmt_free.c\
		 ft_fmt_init.c ft_fmt_print.c ft_fmts_sort.c
GNL_NAME=ft_gnl.c
LST_NAME=ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstfilter.c ft_lstfind.c ft_lstget.c\
		 ft_lstiter.c ft_lstlen.c ft_lstmap.c ft_lstnew.c ft_lstnew_mv.c ft_lstpush.c
MEM_NAME=ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
		 ft_memdel.c ft_memmove.c ft_memset.c ft_realloc.c ft_swap.c\
		 ft_swap_ptr.c ft_tabjoin.c ft_tablen.c ft_tabdel.c
NBR_NAME=ft_atoi.c ft_human_metric_bin.c ft_human_metric_dec.c ft_itoa.c ft_numlen.c\
		 ft_pow.c ft_sqrt.c ft_stoa_human.c
PUT_NAME=ft_putchar.c ft_putchar_fd.c ft_putchar_mul.c ft_putendl.c ft_putendl2.c\
		 ft_putendl2_fd.c ft_putendl3.c ft_putendl3_fd.c ft_putendl_fd.c ft_puterr.c\
		 ft_putnbr.c ft_putnbr_base.c ft_putnbr_bin.c ft_putnbr_fd.c ft_putnbr_hex.c\
		 ft_putnbr_octal.c ft_putstr.c ft_putstr2.c ft_putstr2_fd.c ft_putstr3.c\
		 ft_putstr3_fd.c ft_putstr_fd.c
STR_NAME=ft_strcat.c ft_strchr.c ft_strchr_esc.c ft_strclr.c ft_strcmp.c\
		 ft_strcmp_rev.c ft_strcpy.c ft_strcpy_esc.c ft_strdedup.c ft_strdel.c ft_strdup.c\
		 ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strjoin_sep.c ft_strlcat.c\
		 ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strncpy_esc.c\
		 ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strremove.c ft_strrepl.c ft_strsort.c\
		 ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtab_join.c ft_strtab_join_sep.c ft_strtab_len.c\
		 ft_strtrim.c
TERM_NAME=ft_term_init.c ft_term_type.c ft_term_col.c ft_term_row.c ft_term_clr.c
SRC_NAME=$(addprefix chr/, $(CHR_NAME)) $(addprefix dlst/, $(DLST_NAME))\
		 $(addprefix env/, $(ENV_NAME)) $(addprefix fmt/, $(FMT_NAME))\
		 $(addprefix gnl/, $(GNL_NAME)) $(addprefix lst/, $(LST_NAME))\
		 $(addprefix mem/, $(MEM_NAME)) $(addprefix nbr/, $(NBR_NAME))\
		 $(addprefix put/, $(PUT_NAME)) $(addprefix str/, $(STR_NAME))\
		 $(addprefix term/, $(TERM_NAME))
SRC=$(addprefix src/, $(SRC_NAME))
OBJ=$(patsubst src/%.c, obj/%.o, $(SRC))
OBJ_DBG=$(patsubst src/%.c, obj_dbg/%.o, $(SRC))
OBJ_SAN=$(patsubst src/%.c, obj_san/%.o, $(SRC))
CC=clang
CFLAGS=-Wall -Wextra -Werror -Iinclude
OPTI=-O3
SANFLAGS=-fsanitize=address

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(NAME_DBG): $(OBJ_DBG)
	ar rcs $(NAME_DBG) $(OBJ_DBG)

$(NAME_SAN): $(OBJ_SAN)
	ar rcs $(NAME_SAN) $(OBJ_SAN)

obj/%.o: src/%.c
	@mkdir -p $(basename $@)
	$(CC) $(CFLAGS) $(OPTI) -c $< -o $@

obj_dbg/%.o: src/%.c
	@mkdir -p $(basename $@)
	$(CC) $(CFLAGS) -g -c $< -o $@

obj_san/%.o: src/%.c
	@mkdir -p $(basename $@)
	$(CC) $(CFLAGS) $(SANFLAGS) -c $< -o $@

norme:
	@norminette $(SRC)

debug: $(NAME_DBG)

san: $(NAME_SAN)

clean:
	@rm -rf obj
	@rm -rf obj_dbg
	@rm -rf obj_san

fclean: clean
	@rm -f $(NAME)
	@rm -f $(NAME_DBG)
	@rm -f $(NAME_SAN)

re: fclean all
