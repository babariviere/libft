NAME=libft.a
NAME_DBG=libftdbg.a
NAME_SAN=libftsan.a
ARG_NAME=ft_getopt.c
BUF_NAME=ft_bufnew.c ft_bufdel.c ft_bufputs.c ft_bufputc.c ft_bufrealloc.c
CHR_NAME=ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_islower.c\
		 ft_isprint.c ft_isupper.c ft_iswhitespace.c ft_tolower.c ft_toupper.c
DLST_NAME=ft_dlstadd.c ft_dlstdel.c ft_dlstdelone.c ft_dlstfilter.c ft_dlstfind.c\
		  ft_dlstget.c ft_dlstiter.c ft_dlstlen.c ft_dlstmap.c ft_dlstnew.c\
		  ft_dlstnew_mv.c ft_dlstpush.c
ENV_NAME=ft_env_get.c ft_env_init.c ft_env_rm.c ft_env_set.c ft_env_set_ent.c\
		 ft_env_load.c
FMT_NAME=ft_fmt_add_str.c ft_fmt_calibrate.c ft_fmt_calibrate_range.c ft_fmt_free.c\
		 ft_fmt_init.c ft_fmt_print.c ft_fmts_sort.c
FS_NAME=ft_basename.c ft_join_path.c
GNL_NAME=ft_gnl.c
LST_NAME=ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstfilter.c ft_lstfind.c ft_lstget.c\
		 ft_lstiter.c ft_lstlen.c ft_lstmap.c ft_lstnew.c ft_lstnew_mv.c ft_lstpush.c\
		 ft_lstdel_def.c
MEM_NAME=ft_bzero.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
		 ft_memdel.c ft_memmove.c ft_memset.c ft_realloc.c ft_swap.c\
		 ft_swap_ptr.c ft_tabjoin.c ft_tablen.c ft_tabdel.c
NBR_NAME=ft_atoi.c ft_human_metric_bin.c ft_human_metric_dec.c ft_itoa.c ft_numlen.c\
		 ft_pow.c ft_sqrt.c ft_stoa_human.c ft_ceil.c
IO_NAME=ft_putchar.c ft_putchar_fd.c ft_putchar_mul.c ft_putendl.c ft_putendl2.c\
		 ft_putendl2_fd.c ft_putendl3.c ft_putendl3_fd.c ft_putendl_fd.c ft_puterr.c\
		 ft_putnbr.c ft_putnbr_base.c ft_putnbr_bin.c ft_putnbr_fd.c ft_putnbr_hex.c\
		 ft_putnbr_octal.c ft_putstr.c ft_putstr2.c ft_putstr2_fd.c ft_putstr3.c\
		 ft_putstr3_fd.c ft_putstr_fd.c ft_putwchar.c ft_putwchar_fd.c ft_putaddr.c\
		 ft_putsize.c
STK_NAME=ft_stack_init.c ft_stack_push.c ft_stack_pop.c ft_stack_len.c\
		 ft_stack_isempty.c
STR_NAME=ft_strcat.c ft_strchr.c ft_strchr_esc.c ft_strclr.c ft_strcmp.c\
		 ft_strcmp_rev.c ft_strcpy.c ft_strcpy_esc.c ft_strdedup.c ft_strdel.c ft_strdup.c\
		 ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strjoin_sep.c ft_strlcat.c\
		 ft_strlen.c ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strncpy_esc.c\
		 ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strremove.c ft_strrepl.c ft_strsort.c\
		 ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtab_join.c ft_strtab_join_sep.c ft_strtab_len.c\
		 ft_strtrim.c ft_strmax.c ft_strndup.c ft_wcharcpy.c
TERM_NAME=ft_term_init.c ft_term_type.c ft_term_col.c ft_term_row.c ft_term_clr.c\
		  ft_term_cur_mv.c ft_term_cm.c ft_term_hidein.c ft_term_us.c ft_term_ue.c\
		  ft_term_mb.c ft_term_md.c ft_term_mh.c ft_term_mk.c ft_term_mp.c\
		  ft_term_mr.c ft_term_me.c ft_term_ti.c ft_term_te.c ft_term_cl.c\
		  ft_term_set_alt_scr.c ft_term_set_ul.c ft_term_set_rv.c ft_term_putat.c\
		  ft_term_vi.c ft_term_ve.c ft_term_set_cur_vis.c ft_term_tty.c\
		  ft_puttty.c ft_putwtty.c ft_term_putwat.c ft_term_start.c ft_term_stop.c\
		  ft_term_gscol.c ft_term_gsrow.c ft_term_resize.c
SRC_NAME=$(addprefix arg/, $(ARG_NAME))\
		 $(addprefix buf/, $(BUF_NAME))\
		 $(addprefix chr/, $(CHR_NAME))\
		 $(addprefix dlst/, $(DLST_NAME))\
		 $(addprefix env/, $(ENV_NAME))\
		 $(addprefix fmt/, $(FMT_NAME))\
		 $(addprefix fs/, $(FS_NAME))\
		 $(addprefix gnl/, $(GNL_NAME))\
		 $(addprefix io/, $(IO_NAME))\
		 $(addprefix lst/, $(LST_NAME))\
		 $(addprefix mem/, $(MEM_NAME))\
		 $(addprefix nbr/, $(NBR_NAME))\
		 $(addprefix str/, $(STR_NAME))
#		 $(addprefix stack/, $(STK_NAME))\
#		 $(addprefix term/, $(TERM_NAME))
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
	@printf "==> compiling %s\n" $@
	@ar rcs $(NAME) $(OBJ)

$(NAME_DBG): $(OBJ_DBG)
	@printf "==> compiling %s\n" $@
	@ar rcs $(NAME_DBG) $(OBJ_DBG)

$(NAME_SAN): $(OBJ_SAN)
	@printf "==> compiling %s\n" $@
	@ar rcs $(NAME_SAN) $(OBJ_SAN)

obj/%.o: src/%.c
	@mkdir -p $(basename $@)
	@printf "==> compiling %s\n" $@
	@$(CC) $(CFLAGS) $(OPTI) -c $< -o $@

obj_dbg/%.o: src/%.c
	@mkdir -p $(basename $@)
	@printf "==> compiling %s\n" $@
	@$(CC) $(CFLAGS) -g -c $< -o $@

obj_san/%.o: src/%.c
	@mkdir -p $(basename $@)
	@printf "==> compiling %s\n" $@
	@$(CC) $(CFLAGS) $(SANFLAGS) -c $< -o $@

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
