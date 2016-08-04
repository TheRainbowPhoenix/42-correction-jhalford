/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_j00_by_jack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:29:00 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/04 10:11:54 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#ifdef ex00
#include "ex00/ft_ft.c"
#endif
#ifdef ex01
#include "ex01/ft_ultimate_ft.c"
#endif
#ifdef ex02
#include "ex02/ft_swap.c"
#endif
#ifdef ex03
#include "ex03/ft_div_mod.c"
#endif
#ifdef ex04
#include "ex04/ft_ultimate_div_mod.c"
#endif
#ifdef ex05
#include "ex05/ft_putstr.c"
#endif
#ifdef ex06
#include "ex06/ft_strlen.c"
#endif
#ifdef ex07
#include "ex07/ft_strrev.c"
#endif
#ifdef ex08
#include "ex07/ft_atoi.c"
#endif
#ifdef ex08
#include "ex07/ft_sort_integer_table.c"
#endif

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	start_exo(int num)
{
	getchar();
	printf("\nex%02d:\n", num);
}

void	print_ok()
{
	printf("tests OK\n");
	printf("Entrée pour passer à l'exercice suivant\n");
}

int		ft_int_test(int a, int b)
{
	if (a == b)
		return (0);
	else
		return (1);
}


int		main(void)
{
	int	err = 0;
	printf("----------------------\n");
	printf("    correction d03\n");
	printf("----------------------\n");

	#ifdef ex00
	start_exo(0);
	int	nbr;
	nbr = 30;
	ft_ft(&nbr);
	err += ft_int_test(nbr, 42);
	if (err)
	{
		printf("ft_ft() ne fonctionne pas:");
		nbr = 30;
		printf("valeur avant  : %i\n", nbr);
		ft_ft(&nbr);
		printf("valeur apres : %i\n", nbr);
	}
	else
		print_ok();
	#endif

	/* #ifdef ex01 */
	/* start_exo(1); */
	/* err = 0; */
	/* int	********nbr1; */
	/* ********nbr1 = 10; */
	/* ft_ultimate_ft(&nbr1); */
	/* err += ft_int_test(********nbr, 42); */
	/* if (err) */
	/* { */
	/* 	printf("ft_ultimate_ft() ne fonctionne pas:"); */
	/* 	nbr = 30; */
	/* 	printf("valeur avant  : %i\n", ********nbr); */
	/* 	ft_ultimate_ft(&nbr); */
	/* 	printf("valeur apres : %i\n", ********nbr); */
	/* } */
	/* else */
	/* 	print_ok(); */
	/* #endif */

	#ifdef ex02
	start_exo(2);
	err = 0;
	
	int	a = 10;
	int b = 434;
	ft_swap(&a, &b);
	err += ft_int_test(a, 434);
	err += ft_int_test(b, 10);
	if (err)
	{
		printf("ft_swap() ne fonctionne pas:");
		a = 10;
		b = 434;
		printf("avant : a=%i\tb=%i\n", a, b);
		ft_swap(&a, &b);
		printf("avant : a=%i\tb=%i\n", a, b);
	}
	else
		print_ok();
	#endif

	#ifdef ex03
	start_exo(3);
	err = 0;
	
	a = 27;
	b = 4;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	if (div != a / b)
		err++;
	if (mod != a % b)
		err++;
	if (err)
	{
		printf("ft_div_mod() ne fonctionne pas:");
		a = 10;
		b = 434;
		printf("ft_div_mod(%i, %i, &div, &mod)\n", a, b);
		printf("div = %i\tmod = %i\n", div, mod);
	}
	else
		print_ok();
	#endif

	#ifdef ex04
	start_exo(4);
	err = 0;
	
	int	aa = a;
	int	bb = b;
	ft_ultimate_div_mod(&aa, &bb);
	if (aa != a / b)
		err++;
	if (bb != a % b)
		err++;
	if (err)
	{
		printf("ft_ultimate_div_mod() ne fonctionne pas:");
		printf("ft_div_mod(%i, %i)\n", a, b);
		printf("sortie: a = %i\tb = %i\n", aa, bb);
	}
	else
		print_ok();
	#endif
}
