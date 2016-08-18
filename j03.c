/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_j00_by_jack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:29:00 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/11 19:27:29 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "corrlib.h"

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
#include "ex08/ft_atoi.c"
#endif
#ifdef ex09
#include "ex09/ft_sort_integer_table.c"
#endif

int		main(void)
{
	int		err;
	char	*exname;
	int		exnb;
	start_day(2);

	err = 0;
	exnb = 0;
	exname = "test";
#ifdef ex00
	start_exo(exnb);
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

exnb++;
	/* #ifdef ex01 */
	/* start_exo(exnb); */
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

exnb++;
#ifdef ex02
	start_exo(exnb);
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

exnb++;
#ifdef ex03
	start_exo(exnb);
	err = 0;

	int a3 = 27;
	int b3 = 4;
	int div;
	int mod;
	ft_div_mod(a3, b3, &div, &mod);
	if (div != a3/ b3)
		err++;
	if (mod != a3% b3)
		err++;
	if (err)
	{
		printf("ft_div_mod() ne fonctionne pas:");
		a3 = 10;
		b3 = 434;
		printf("ft_div_mod(%i, %i, &div, &mod)\n", a3, b3);
		printf("div = %i\tmod = %i\n", div, mod);
	}
	else
		print_ok();
#endif

exnb++;
#ifdef ex04
	start_exo(exnb);
	err = 0;

	int a4 = 27;
	int b4 = 4;
	int	aa4 = a4;
	int	bb4 = b4;
	ft_ultimate_div_mod(&aa4, &bb4);
	if (aa4 != a4 / b4)
		err++;
	if (bb4 != a4 % b4)
		err++;
	if (err)
	{
		printf("ex04 ne fonctionne pas:");
		printf("ft_ultimate_div_mod(%i, %i)\n", a4, b4);
		printf("div = %i (%i attendu)\n", aa4, a4 / b4);
		printf("mod = %i (%i attendu)\n", bb4, a4 % b4);
	}
	else
		print_ok();
#endif

exnb++;
#ifdef ex05
	start_exo(exnb);

	char str5[100] = "voila une chaine";
	printf("ft_putstr(%s): ", str5);
	fflush(stdout);
	ft_putstr(str5);
	printf("\n");
	strcpy(str5, "[ test { )");
	printf("ft_putstr(%s): ", str5);
	fflush(stdout);
	ft_putstr(str5);
	printf("\n");
#endif

exnb++;
#ifdef ex06
	start_exo(exnb);
	err = 0;

	char str6[100] = "0123456789";
	int strlen = 10;
	if ((ft_int_test(ft_strlen(str6), strlen)))
	{
		err += 1;
		printf("ex06 ne fonctionne pas: \n");
		printf("ft_strlen(%s) = %i (%i attendu)\n", str6, ft_strlen(str6), strlen);
	}
	strcpy(str6, "");
	strlen = 0;
	if ((ft_int_test(ft_strlen(str6), strlen)))
	{
		err += 1;
		printf("ex06 ne fonctionne pas: \n");
		printf("ft_strlen(%s) = %i (%i attendu)\n", str6, ft_strlen(str6), strlen);
	}
	strcpy(str6, "a");
	strlen = 1;
	if ((ft_int_test(ft_strlen(str6), strlen)))
	{
		err += 1;
		printf("ex06 ne fonctionne pas: \n");
		printf("ft_strlen(%s) = %i (%i attendu)\n", str6, ft_strlen(str6), strlen);
	}
	if (err == 0)
		print_ok();
#endif

exnb++;
#ifdef ex07
	start_exo(exnb);
	err = 0;

	char *in7 = "test";
	char str7[100] = "test";
	char *out7 = "tset";
	ft_strrev(str7);
	if (strcmp(str7, out7))
	{
		err += 1;
		printf("ex07 ne fonctionne pas: \n");
		printf("ft_strrev(%s) = %s (%s attendu)\n", in7, str7, out7);
	}
	if (err == 0)
		print_ok();
#endif

exnb++;
#ifdef ex08
	exname = "ft_atoi";
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("02147483647",ft_atoi("02147483647"),2147483647,exnb,exname);
	err += ft_test_ex("-2147483648",ft_atoi("-2147483648"),-2147483648,exnb,exname);
	err += ft_test_ex("a12",ft_atoi("a12"),0,exnb,exname);
	err += ft_test_ex("\t 21u",ft_atoi("\t 21u"),21,exnb,exname);
	err += ft_test_ex(" \v-12",ft_atoi(" \v-12"),-12,exnb,exname);
	err += ft_test_ex("-1-12",ft_atoi("-1-12"),-1,exnb,exname);
	err += ft_test_ex("--12",ft_atoi("--12"),0,exnb,exname);
	err += ft_test_ex(" -+12",ft_atoi(" -+12"),0,exnb,exname);
	err += ft_test_ex("+12",ft_atoi("+12"),12,exnb,exname);
	if (err == 0)
		print_ok();
#endif

exnb++;
#ifdef ex09
	exname = "ft_sort_list";
	start_exo(exnb);
	int i9 = 0;
	int in9[10] = {4356,4357,0,10,-10,14,13,12,-100,-247};
	printf("avant: ");
	while (i9 < 10)
		printf("%i, ", in9[i9++]);
	printf("\n");
	ft_sort_integer_table(in9, 10);
	printf("après: ");
	i9 = 0;
	while (i9 < 10)
		printf("%i, ", in9[i9++]);
	printf("\n");
#endif
}
