EXOS = ex00/ft_print_alphabet.c \
	   ex01/ft_print_reverse_alphabet.c \
	   ex02/ft_print_numbers.c \
	   ex03/ft_is_negative.c \
	   ex04/ft_print_comb.c \
	   ex05/ft_print_comb2.c \
	   ex06/ft_putnbr.c \
	   ex07/ft_print_combn.c

ifneq ($(wildcard ex00/ft_print_alphabet.c),)
	FLAGS += -D ex00 
endif
ifneq ($(wildcard ex01/ft_print_reverse_alphabet.c),)
	FLAGS += -D ex01
endif
ifneq ($(wildcard ex02/ft_print_numbers.c),)
	FLAGS += -D ex02
endif
ifneq ($(wildcard ex03/ft_is_negative.c),)
	FLAGS += -D ex03
endif
ifneq ($(wildcard ex04/ft_print_comb.c),)
	FLAGS += -D ex04
endif
ifneq ($(wildcard ex05/ft_print_comb2.c),)
	FLAGS += -D ex05
endif
ifneq ($(wildcard ex06/ft_putnbr.c),)
	FLAGS += -D ex06
endif
ifneq ($(wildcard ex07/ft_print_combn.c),)
	FLAGS += -D ex07
endif

.PHONY: j02 j03 default

default:
	@echo "il faut specifier le jour"

j02:
	gcc $@.c $(FLAGS) && ./a.out

j03:
	@echo "j03 pas encore dispo :("
