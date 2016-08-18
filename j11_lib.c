/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j11_lib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:53:57 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/18 17:13:13 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corrlib.h"
#ifndef FT_LIST_H
# define FT_LIST_H
typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
#endif

void	ft_print_list(t_list *list)
{
	while (list)
	{
		printf("[ %s ] -> ", list->data);
		list = list->next;
	}
	printf("NULL\n");
}

#ifndef ex00
t_list	*ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(tmp));
	tmp->next = NULL;
	tmp->data = data;
	return (tmp);
}
#endif
