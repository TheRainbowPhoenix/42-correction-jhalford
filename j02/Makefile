ifneq ($(wildcard ex00/ft_print_alphabet.c),)
	exo += -D EX_00
endif
ifneq ($(wildcard ex01/ft_print_reverse_alphabet.c),)
	exo += -D EX_01
endif
ifneq ($(wildcard ex02/ft_print_numbers.c.c),)
	exo += -D EX_02
endif
ifneq ($(wildcard ex03/ft_is_negative.c),)
	exo += -D EX_03
endif
ifneq ($(wildcard ex04/ft_print_comb.c),)
	exo += -D EX_04
endif
ifneq ($(wildcard ex05/ft_print_comb2.c),)
	exo += -D EX_05
endif
ifneq ($(wildcard ex06/ft_putnbr.c),)
	exo += -D EX_06
endif
ifneq ($(wildcard ex07/ft_print_combn.c),)
	exo += -D EX_07
endif

all:
	gcc ~/jhalford/j02/correct_j02_jhalford.c $(exo) && ./a.out
