default:
	@echo "il faut specifier le jour"

FLAGS=

j02:
	$(eval EXOS=ex00/ft_print_alphabet.c \
		ex01/ft_print_reverse_alphabet.c \
		ex02/ft_print_numbers.c \
		ex03/ft_is_negative.c \
		ex04/ft_print_comb.c \
		ex05/ft_print_comb2.c \
		ex06/ft_putnbr.c \
		ex07/ft_print_combn.c)
	$(foreach, exo,$(EXOS),\
		echo $(EXO)\
		ifneq ($(wildcard $(EXO)),)\
			FLAGS += -D EX_00\
		endif)
	gcc $@.c $(FLAGS) && ./a.out

j03:
	@echo "j03 pas encore dispo :("
