/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j07.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 09:43:03 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/11 20:58:16 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corrlib.h"

#ifdef ex00
#include "ex00/ft_strdup.c"
#endif
#ifdef ex01
#include "ex01/ft_range.c"
#endif
#ifdef ex02
#include "ex02/ft_ultimate_range.c"
#endif
#ifdef ex03
#include "ex03/ft_concat_params.c"
#endif
#ifdef ex04
#include "ex04/ft_split_whitespaces.c"
#endif
#ifdef ex05
#include "ex05/ft_print_words_table.c"
#endif
#ifdef ex06
#include "ex06/ft_convert_base.c"
#endif
#ifdef ex07
#include "ex07/ft_split.c"
#endif

int		main(void)
{
	int		err = 0;
	char	*exname;
	int		exnb = 0;
	int		i = 0;
	char	a[100];
	char	b[100];
	char	in[100];

	start_day(7);
#ifdef ex00
	exname = "ft_strdup";
	start_exo(exnb);
	err = 0;
	strcpy(a, "hello world");
	err += ft_test_ex2(a, ft_strdup(a), strdup(a), exnb, exname);
	strcpy(a, "i");
	err += ft_test_ex2(b, ft_strdup(a), strdup(a), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex01
	exname = "ft_range";
	start_exo(exnb);
	int	*tab1 = ft_range(13,15);
	printf("ft_range(13,15) = {");
	fflush(stdout);
	while (*tab1)
		printf("%i, ", *tab1++);
	fflush(stdout);
	printf("} ({13,14,} attendu)\n");

	int	*tab1_2 = ft_range(9,9);
	printf("ft_range(16,15) = {");
	fflush(stdout);
	if (tab1_2)
		while (*tab1_2)
			printf("%i, ", *tab1_2++);
	fflush(stdout);
	printf("} ({} attendu)\n");
	fflush(stdout);

	int	*tab1_1 = ft_range(-3,4);
	printf("ft_range(-3,2) = {");
	fflush(stdout);
	int i01 = 0;
	while (i01 < 7)
		printf("%i,", tab1_1[i01++]);
	fflush(stdout);
	printf("} ({-3,-2,-1,0,1,2,3} attendu)\n");
#endif

	exnb++;
#ifdef ex02
	exname = "ft_ultimate_range";
	start_exo(exnb);
	int	*tab02;
	ft_ultimate_range(&tab02, 13, 16);
	printf("ft_range(13,16) = {");
	fflush(stdout);
	while (*tab02)
		printf("%i,", *tab02++);
	fflush(stdout);
	printf("} ({13,14,15,} attendu)\n");

	ft_ultimate_range(&tab02, 16, 15);
	printf("ft_range(16,15) = {");
	fflush(stdout);
	if (tab02)
		while (*tab02)
			printf("%i, ", *tab02++);
	fflush(stdout);
	printf("} ({} attendu)\n");

	ft_ultimate_range(&tab02, -3, 4);
	printf("ft_range(-3,2) = {");
	fflush(stdout);
	int i01 = 0;
	while (i01 < 7)
		printf("%i,", tab02[i01++]);
	fflush(stdout);
	printf("} ({-3,-2,-1,0,1,2,3} attendu)\n");
#endif

	exnb++;
#ifdef ex03 
	/* exname = "ft_concat_params"; */
	/* char tab03[3][10]; */
	/* i = 1; */
	/* while (i < 3) */
	/* 	strcpy(tab03[i], "test1"); */
	/* 	strcat(a, tab03[i]); */
	/* printf("yes\n"); */
	/* err += ft_test_ex2("{'test1', '42', 'lol3'}", ft_concat_params(3, tab03), a, exnb, exname); */
	/* if (!err) */
	/* 	print_ok(); */
#endif

	exnb++;
#ifdef ex04

#endif

	exnb++;
#ifdef ex05
#endif

	exnb++;
#ifdef ex06
#endif

	exnb++;
#ifdef ex07
#endif

}
