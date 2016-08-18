/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_btree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:05:48 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/18 15:57:47 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H
typedef struct	s_btree
{
	struct s_btree	*left;
	struct s_btree	*right;
	void			*item;
}				t_btree;
t_btree			*btree_create_node(void *item);
#endif

void	print_offset(FILE* stream, int offset)
{
	int i;
	for (i = 0; i < offset; ++i)
	{
		fprintf(stream, " ");
	}
}

void	bst_print_ascii(t_btree* tree, FILE* stream)
{
	static int offset = 0;

	print_offset(stream, offset);

	if (tree == NULL)
	{
		fprintf(stream, "-\n");
		return;
	}
	fprintf(stream, "%s\n", (char *)tree->item);

	offset += 3;
	bst_print_ascii(tree->left, stream);
	bst_print_ascii(tree->right, stream);
	offset -= 3;
}
