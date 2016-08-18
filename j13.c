/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j07.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 09:43:03 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/18 16:04:22 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corrlib.h"
#include "j13_lib.c"

#ifdef ex00
#include "ex00/btree_create_node.c"
#endif
#ifdef ex01
#include "ex01/btree_apply_prefix.c"
#endif
#ifdef ex02
#include "ex02/btree_apply_infix.c"
#endif
#ifdef ex03
#include "ex03/btree_apply_suffix.c"
#endif
#ifdef ex04
#include "ex04/btree_insert_data.c"
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
	t_btree	*root;

	start_day(13);
#ifdef ex00
	exname = "btree_create_node";
	start_exo(exnb);
	root = btree_create_node("2");
	root->left = btree_create_node("1");
	root->left->left = btree_create_node("0");
	root->left->right = btree_create_node("1");
	root->right = btree_create_node("4");
	root->right->right = btree_create_node("5");
	bst_print_ascii(root, stdout);
#endif

	exnb++;
#ifdef ex01
	exname = "btree_apply_prefix";
	start_exo(exnb);
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
