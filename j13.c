/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j07.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 09:43:03 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/18 18:49:30 by jhalford         ###   ########.fr       */
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
#endif

	exnb++;
#ifdef ex03 
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
