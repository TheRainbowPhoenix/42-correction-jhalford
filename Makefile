FLAGS = -Wall -Wextra -Werror
EXOS = ex00/ft_print_alphabet.c \
	   ex01/ft_print_reverse_alphabet.c \
	   ex02/ft_print_numbers.c \
	   ex03/ft_is_negative.c \
	   ex04/ft_print_comb.c \
	   ex05/ft_print_comb2.c \
	   ex06/ft_putnbr.c \
	   ex07/ft_print_combn.c

ifneq ($(wildcard ex00/ft_print_alphabet.c),)
	FLAGSj02 += -D ex00 
endif
ifneq ($(wildcard ex01/ft_print_reverse_alphabet.c),)
	FLAGSj02 += -D ex01
endif
ifneq ($(wildcard ex02/ft_print_numbers.c),)
	FLAGSj02 += -D ex02
endif
ifneq ($(wildcard ex03/ft_is_negative.c),)
	FLAGSj02 += -D ex03
endif
ifneq ($(wildcard ex04/ft_print_comb.c),)
	FLAGSj02 += -D ex04
endif
ifneq ($(wildcard ex05/ft_print_comb2.c),)
	FLAGSj02 += -D ex05
endif
ifneq ($(wildcard ex06/ft_putnbr.c),)
	FLAGSj02 += -D ex06
endif
ifneq ($(wildcard ex07/ft_print_combn.c),)
	FLAGSj02 += -D ex07
endif

ifneq ($(wildcard ex00/ft_ft.c),)
	FLAGSj03 += -D ex00 
endif
ifneq ($(wildcard ex01/ft_ultimate_ft.c),)
	FLAGSj03 += -D ex01
endif
ifneq ($(wildcard ex02/ft_swap.c),)
	FLAGSj03 += -D ex02
endif
ifneq ($(wildcard ex03/ft_div_mod.c),)
	FLAGSj03 += -D ex03
endif
ifneq ($(wildcard ex04/ft_ultimate_div_mod.c),)
	FLAGSj03 += -D ex04
endif
ifneq ($(wildcard ex05/ft_putstr.c),)
	FLAGSj03 += -D ex05
endif
ifneq ($(wildcard ex06/ft_strlen.c),)
	FLAGSj03 += -D ex06
endif
ifneq ($(wildcard ex07/ft_strrev.c),)
	FLAGSj03 += -D ex07
endif
ifneq ($(wildcard ex08/ft_atoi.c),)
	FLAGSj03 += -D ex07
endif
ifneq ($(wildcard ex09/ft_sort_integer_table.c),)
	FLAGSj03 += -D ex07
endif

.PHONY: j02 j03 default

default:
	@echo "il faut specifier le jour"

j02:
	gcc $(FLAGS) $@.c $(FLAGSj02) && ./a.out

j03:
	gcc $(FLAGS) $@.c $(FLAGSj03) && ./a.out
