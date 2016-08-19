PATH_jhalford=~/42-correction-jhalford
FLAGS = -Wall -Wextra -Werror
EXOSj02 := ex00/ft_print_alphabet.c \
ex01/ft_print_reverse_alphabet.c \
ex02/ft_print_numbers.c \
ex03/ft_is_negative.c \
ex04/ft_print_comb.c \
ex05/ft_print_comb2.c \
ex06/ft_putnbr.c \
ex07/ft_print_combn.c

EXOSj03 := ex00/ft_ft.c \
ex01/ft_ultimate_ft.c \
ex02/ft_swap.c \
ex03/ft_div_mod.c \
ex04/ft_ultimate_div_mod.c \
ex05/ft_putstr.c \
ex06/ft_strlen.c \
ex07/ft_strrev.c \
ex08/ft_atoi.c \
ex09/ft_sort_integer_table.c \

EXOSj04 := ex00/ft_iterative_factorial.c \
ex01/ft_recursive_factorial.c \
ex02/ft_iterative_power.c \
ex03/ft_recursive_power.c \
ex04/ft_fibonacci.c \
ex05/ft_sqrt.c \
ex06/ft_is_prime.c \
ex07/ft_find_next_prime.c \
ex08/ft_eight_queens_puzzle.c \
ex09/ft_eight_queens_puzzle_2.c \

EXOSj05 := ex00/ft_putstr.c \
ex01/ft_putnbr.c \
ex02/ft_atoi.c \
ex03/ft_strcpy.c \
ex04/ft_strncpy.c \
ex05/ft_strstr.c \
ex06/ft_strcmp.c \
ex07/ft_strncmp.c \
ex08/ft_strupcase.c \
ex09/ft_strlowcase.c \
ex10/ft_strcapitalize.c \
ex11/ft_str_is_alpha.c \
ex12/ft_str_is_numeric.c \
ex13/ft_str_is_lowercase.c \
ex14/ft_str_is_uppercase.c \
ex15/ft_str_is_printable.c \
ex16/ft_strcat.c \
ex17/ft_strncat.c \
ex18/ft_strlcat.c \
ex19/ft_strlcpy.c \
ex20/ft_putnbr_base.c \
ex21/ft_atoi_base.c \
ex22/ft_putstr_non_printable.c \
ex23/ft_print_memory.c \

EXOSj07 := ex00/ft_strdup.c \
ex01/ft_range.c \
ex02/ft_ultimate_range.c \
ex03/ft_concat_params.c \
ex04/ft_split_whitespaces.c \
ex05/ft_print_words_table.c \
ex06/ft_convert_base.c \
ex07/ft_split.c \

EXOSj11 := ex00/ft_create_elem.c \
ex01/ft_list_push_back.c \
ex02/ft_list_push_front.c \
ex03/ft_list_size.c \
ex04/ft_list_last.c \
ex05/ft_list_push_params.c \
ex06/ft_list_clear.c \
ex07/ft_list_at.c \
ex08/ft_list_reverse.c \
ex09/ft_list_foreach.c \
ex10/ft_list_foreach_if.c \
ex11/ft_list_find.c \
ex12/ft_list_remvoe_if.c \
ex13/ft_list_merge.c \
ex14/ft_list_sort.c \
ex15/ft_list_reverse_fun.c \
ex16/ft_sorted_list_insert.c \
ex17/ft_sorted_list_merge.c \

EXOSj13 := ex00/btree_create_node.c \
ex01/btree_apply_prefix.c \
ex02/btree_apply_infix.c \
ex03/btree_apply_suffix.c \
ex04/btree_insert_data.c \
ex05/btree_search_item.c \
ex06/btree_level_count.c \
ex07/btree_apply_by_level.c \
ex08/rb_insert.c \
ex09/rb_remove.c \

.PHONY: j02 j03 j04 j05 j07 j11 j13 default

default:
	@echo "il faut specifier le jour"

j02:
	gcc -I $(PATH_jhalford) $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj02), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j03:
	gcc -I $(PATH_jhalford) $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj03), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j04:
	gcc -I $(PATH_jhalford) $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj04), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j05:
	gcc -I $(PATH_jhalford) $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj05), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j07:
	gcc -I $(PATH_jhalford) $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj07), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j11:
	gcc -I $(PATH_jhalford) $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj11), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j13:
	gcc -I $(PATH_jhalford) $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj13), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out
