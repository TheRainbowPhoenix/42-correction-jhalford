/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_j00_by_jack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:29:00 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/03 21:08:56 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#ifdef ex00
#include "ex00/ft_print_alphabet.c"
#endif
#ifdef ex01
#include "ex01/ft_print_reverse_alphabet.c"
#endif
#ifdef ex02
#include "ex02/ft_print_numbers.c"
#endif
#ifdef ex03
#include "ex03/ft_is_negative.c"
#endif
#ifdef ex04
#include "ex04/ft_print_comb.c"
#endif
#ifdef ex05
#include "ex05/ft_print_comb2.c"
#endif
#ifdef ex06
#include "ex06/ft_putnbr.c"
#endif
#ifdef ex07
#include "ex07/ft_print_combn.c"
#endif

void	start_exo(int num)
{
	getchar();	
	printf("\nex%02d:\n", num);
}

int		main(void)
{
	printf("----------------------\n");
	printf("    correction d02\n");
	printf("----------------------\n");

	#ifdef ex00
	start_exo(0);
	printf("ft_print_alphabet(): ");
	fflush(stdout);
	ft_print_alphabet();
	#endif
	
	#ifdef ex01
	start_exo(1);
	printf("ft_print_reverse_alphabet(): ");
	fflush(stdout);
	ft_print_reverse_alphabet();
	#endif

	#ifdef ex02
	start_exo(2);
	printf("ft_print_numbers(): ");
	fflush(stdout);
	ft_print_numbers();
	#endif

	#ifdef ex03
	start_exo(3);
	printf("ft_is_negative(-10) = '");		
	fflush(stdout);
	ft_is_negative(-10);
	printf("' (correct is N)\n");
	printf("ft_is_negative(0) = '");		
	fflush(stdout);
	ft_is_negative(0);
	printf("' (correct is P)\n");
	printf("ft_is_negative(+10) = '");		
	fflush(stdout);
	ft_is_negative(10);
	printf("' (correct is P)\n");
	#endif

	#ifdef ex04
	start_exo(4);
	ft_print_comb();
	fflush(stdout);
	#endif

	#ifdef ex05
	start_exo(5);
	ft_print_comb2();	
	fflush(stdout);
	#endif

	#ifdef ex06
	start_exo(6);
	printf("ft_putnbr(-10) = ");		
	fflush(stdout);
	ft_putnbr(-10);
	printf("\n");

	printf("ft_putnbr(0) = ");		
	fflush(stdout);
	ft_putnbr(0);
	printf("\n");

	printf("ft_putnbr(10) = ");		
	fflush(stdout);
	ft_putnbr(10);
	printf("\n");

	printf("ft_putnbr(1234567) = ");		
	fflush(stdout);
	ft_putnbr(1234567);
	printf("\n");

	printf("ft_putnbr(-876543210) = ");		
	fflush(stdout);
	ft_putnbr(-876543210);
	printf("\n");
	#endif

	#ifdef ex07
	start_exo(7);
	printf("ft_print_combn(0) = '");
	fflush(stdout);
	ft_print_combn(0);
	printf("'\n");
	printf("ft_print_combn(1) = '");
	fflush(stdout);
	ft_print_combn(1);
	printf("'\n");
	printf("ft_print_combn(2) = '");
	fflush(stdout);
	ft_print_combn(2);
	printf("'\n");
	printf("ft_print_combn(9) = '");
	fflush(stdout);
	ft_print_combn(9);
	printf("'\n");
	#endif
	return 0;
}
