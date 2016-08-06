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

.PHONY: j02 j03 j04 j05 j06 j07 default

default:
	@echo "il faut specifier le jour"

j02:
	gcc $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj02), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j03:
	gcc $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj03), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j04:
	gcc $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj04), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j05:
	gcc $(FLAGS) $@.c -D $@ $(foreach EX_PATH, $(EXOSj05), $(if $(wildcard $(EX_PATH)), -D $(subst /,,$(dir $(EX_PATH))))) && ./a.out

j06:
	@echo "Pas de suite de tests prévue pour le jour 06 !"
