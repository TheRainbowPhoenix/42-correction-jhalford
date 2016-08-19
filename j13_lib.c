/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_btree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:05:48 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/19 15:51:31 by jhalford         ###   ########.fr       */
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
	bst_print_ascii(tree->right, stream);
	bst_print_ascii(tree->left, stream);
	offset -= 3;
}

int		my_strcmp(void *s1, void *s2)
{
	return (*((char *)s1) - *((char *)s2));
}

void	ft_print_fence(int level)
{
	ft_putchar('\n');
	/* if (level == 0) */
	/* 	ft_putstr("   "); */
	/* if (level == 1) */
	/* { */
	/* 	ft_putstr("  /\\"); */
	/* 	ft_putstr("\n "); */
	/* } */
	/* if (level == 2) */
	/* { */
	/* 	ft_putstr("/\\  /\\"); */
	/* 	ft_putstr("\n"); */
	/* } */
}

void	ft_print_btree3(void *item, int current_level, int is_first_elem)
{
	if (is_first_elem)
		ft_print_fence(current_level);
	if (item)
		write(1, item, 1);
	else
		ft_putchar('.');
	ft_putchar(' ');
}

#ifndef ex00
t_btree	*btree_create_node(void *item)
{
	t_btree	*node;

	node = (t_btree *)malloc(sizeof(t_btree));
	node->left = 0;
	node->right = 0;
	node->item = item;
	return (node);
}
#endif
