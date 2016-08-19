/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j07.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 09:43:03 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/19 16:09:40 by jhalford         ###   ########.fr       */
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
#include "ex05/btree_search_item.c"
#endif
#ifdef ex06
#include "ex06/btree_level_count.c"
#endif
#ifdef ex07
#include "ex07/btree_apply_by_level.c"
#endif

int		main(void)
{
	char	*exname;
	int		exnb = 0;
	t_btree	*root;
	root = btree_create_node("2");
	root->left = btree_create_node("1");
	root->left->left = btree_create_node("0");
	root->left->right = btree_create_node("1");
	root->right = btree_create_node("4");
	root->right->left = btree_create_node("3");
	root->right->right = btree_create_node("5");

	start_day(13);
#ifdef ex00
	exname = "btree_create_node";
	start_exo(exnb);
	printf("%s\n", exname);

	t_btree	*root00;
	root00 = btree_create_node("2");
	root00->left = btree_create_node("1");
	root00->left->left = btree_create_node("0");
	root00->left->right = btree_create_node("1");
	root00->right = btree_create_node("4");
	root00->right->right = btree_create_node("5");
	bst_print_ascii(root00, stdout);
#endif

	exnb++;
#ifdef ex01
	exname = "btree_apply_prefix";
	start_exo(exnb);

	bst_print_ascii(root, stdout);
	printf("%s: ", exname);
	fflush(stdout);
	btree_apply_prefix(root, &ft_put1char);
#endif

	exnb++;
#ifdef ex02
	exname = "btree_apply_infix";
	start_exo(exnb);

	bst_print_ascii(root, stdout);
	printf("%s: ", exname);
	fflush(stdout);
	btree_apply_infix(root, &ft_put1char);
#endif

	exnb++;
#ifdef ex03 
	exname = "btree_apply_suffix";
	start_exo(exnb);

	bst_print_ascii(root, stdout);
	printf("%s: ", exname);
	fflush(stdout);
	btree_apply_suffix(root, &ft_put1char);
#endif

	exnb++;
#ifdef ex04
	start_exo(exnb);
	root = NULL;
	printf("avant:\n");
	bst_print_ascii(root, stdout);
	btree_insert_data(&root, "2", &my_strcmp);
	btree_insert_data(&root, "1", &my_strcmp);
	btree_insert_data(&root, "4", &my_strcmp);
	btree_insert_data(&root, "5", &my_strcmp);
	btree_insert_data(&root, "0", &my_strcmp);
	btree_insert_data(&root, "3", &my_strcmp);
	btree_insert_data(&root, "1", &my_strcmp);
	printf("après:\n");
	bst_print_ascii(root, stdout);
#endif

	exnb++;
#ifdef ex05
	start_exo(exnb);
	bst_print_ascii(root, stdout);
	exname = "btree_search_item";
	printf("%s = %s (expected 1)\n", exname, btree_search_item(root, "1", &my_strcmp));
	printf("%s = %s (expected 4)\n", exname, btree_search_item(root, "4", &my_strcmp));
	printf("%s = %s (expected 0)\n", exname, btree_search_item(root, "0", &my_strcmp));
#endif

	exnb++;
#ifdef ex06
	start_exo(exnb);
	exname = "btree_level_count";
	bst_print_ascii(root, stdout);
	printf("%s = %i (expected 3)\n", exname, btree_level_count(root));

	root = NULL;
	bst_print_ascii(root, stdout);
	printf("%s = %i (expected 0)\n", exname, btree_level_count(root));

	root = btree_create_node("2");
	bst_print_ascii(root, stdout);
	printf("%s = %i (expected 1)\n", exname, btree_level_count(root));
#endif

	exnb++;
#ifdef ex07
	start_exo(exnb);

	root = btree_create_node("2");
	root->left = btree_create_node("1");
	root->left->left = btree_create_node("0");
	root->left->right = btree_create_node("1");
	root->right = btree_create_node("4");
	root->right->left = btree_create_node("3");
	root->right->right = btree_create_node("5");

	bst_print_ascii(root, stdout);
	btree_apply_by_level(root, &ft_print_btree3);
#endif
}
