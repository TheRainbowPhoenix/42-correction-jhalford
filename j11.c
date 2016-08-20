/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   j11.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 15:56:47 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/20 15:11:33 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corrlib.h"
#include "j11_lib.c"

#ifdef ex00
#include "ex00/ft_create_elem.c"
#endif
#ifdef ex01
#include "ex01/ft_list_push_back.c"
#endif
#ifdef ex02
#include "ex02/ft_list_push_front.c"
#endif
#ifdef ex03
#include "ex03/ft_list_size.c"
#endif
#ifdef ex04
#include "ex04/ft_list_last.c"
#endif
#ifdef ex05
#include "ex05/ft_list_push_params.c"
#endif
#ifdef ex06
#include "ex06/ft_list_clear.c"
#endif
#ifdef ex07
#include "ex07/ft_list_at.c"
#endif
#ifdef ex08
#include "ex08/ft_list_reverse.c"
#endif
#ifdef ex09
#include "ex09/ft_list_foreach.c"
#endif
#ifdef ex10
#include "ex10/ft_list_foreach_if.c"
#endif
#ifdef ex11
#include "ex11/ft_list_find.c"
#endif
#ifdef ex12
#include "ex12/ft_list_remove_if.c"
#endif
#ifdef ex13
#include "ex13/ft_list_merge.c"
#endif
#ifdef ex14
#include "ex14/ft_list_sort.c"
#endif
#ifdef ex15
#include "ex15/ft_list_reverse_fun.c"
#endif
#ifdef ex16
#include "ex16/ft_sorted_list_insert.c"
#endif
#ifdef ex17
#include "ex17/ft_sorted_list_merge.c"
#endif

void	my_func(void *data)
{
	((char*)data)[1] = ((char*)data)[0];
}

int		main(void)
{
	char	*exname;
	int		exnb = 0;
	t_list	*link;
	t_list	*base;

	base = ft_create_elem("ABC");
	base->next = ft_create_elem("012");
	base->next->next = ft_create_elem("xyz");
	start_day(13);
#ifdef ex00
	exname = "ft_create_elem";
	start_exo(exnb);

	link = ft_create_elem("A");
	link->next = ft_create_elem("B");
	ft_print_list(link);
	printf("expected:\n");
	printf("[ A ] -> [ B ] -> NULL\n");
#endif

	exnb++;
#ifdef ex01
	exname = "ft_list_push_back";
	start_exo(exnb);
	ft_warning1();
	link = NULL;
	ft_list_push_back(&link, "A");
	ft_list_push_back(&link, "B");
	ft_list_push_back(&link, "C");
	ft_print_list(link);
	printf("expected:\n");
	printf("[ A ] -> [ B ] -> [ C ] -> NULL\n");
#endif

	exnb++;
#ifdef ex02
	exname = "ft_list_push_front";
	start_exo(exnb);
	ft_warning1();
	link = NULL;
	ft_list_push_front(&link, "C");
	ft_list_push_front(&link, "B");
	ft_list_push_front(&link, "A");
	ft_print_list(link);
	printf("expected:\n");
	printf("[ A ] -> [ B ] -> [ C ] -> NULL\n");
#endif

	exnb++;
#ifdef ex03
	start_exo(exnb);
	exname = "ft_list_size";
	ft_warning1();
	printf("list : ");
	ft_print_list(base);
	printf("%s = %i\n", exname, ft_list_size(base));
	printf("\nlist : ");
	ft_print_list(NULL);
	printf("%s = %i\n", exname, ft_list_size(NULL));
#endif

	exnb++;
#ifdef ex04
	start_exo(exnb);
	exname = "ft_list_last";
	ft_warning1();

	printf("list : ");
	ft_print_list(base);
	printf("%s = ", exname);
	ft_print_list(ft_list_last(base));

	printf("\nlist : ");
	ft_print_list(NULL);
	printf("%s = ", exname);
	ft_print_list(ft_list_last(NULL));
#endif

	exnb++;
#ifdef ex05
	start_exo(exnb);
	exname = "ft_list_push_params";
	printf("pas encore de suite de tests pour cet exercice :(\n");
#endif

	exnb++;
#ifdef ex06
	start_exo(exnb);
	exname = "ft_list_clear";

	printf("%s\n", exname);
	printf("avant : ");
	ft_print_list(base);
	ft_list_clear(&base);
	printf("apres : ");
	ft_print_list(base);
	base = ft_create_elem("ABC");
	base->next = ft_create_elem("012");
	base->next->next = ft_create_elem("xyz");
#endif

	exnb++;
#ifdef ex07
	start_exo(exnb);
	exname = "ft_list_at";
	ft_warning1();

	printf("list : ");
	ft_print_list(base);
	printf("%s(list, 0) = ", exname);
	ft_print_list(ft_list_at(base, 0));

	printf("\nlist : ");
	ft_print_list(base);
	printf("%s(list, 1) = ", exname);
	ft_print_list(ft_list_at(base, 1));

	printf("\n%s(NULL, 0) = ", exname);
	ft_print_list(ft_list_at(NULL, 0));

	printf("\n%s(NULL, 1) = ", exname);
	ft_print_list(ft_list_at(NULL, 1));
#endif

	exnb++;
#ifdef ex08
	start_exo(exnb);
	exname = "ft_list_reverse";

	printf("%s\n", exname);
	printf("avant : ");
	ft_print_list(base);
	ft_list_reverse(&base);
	printf("apres : ");
	ft_print_list(base);
#endif


	exnb++;
#ifdef ex09
	start_exo(exnb);
	exname = "ft_list_foreach";
	base = ft_create_elem("012");
	base->next = ft_create_elem("ABC");
	base->next->next = ft_create_elem("xyz");

	printf("%s, avec la fonction ft_putstr()\n", exname);
	printf("list : ");
	ft_print_list(base);
	printf("%s : ", exname);
	fflush(stdout);
	ft_list_foreach(base, &corr_ft_putstr);
#endif

	exnb++;
#ifdef ex10
	start_exo(exnb);
	exname = "ft_list_foreach_if";

	printf("list : ");
	ft_print_list(base);
	printf("%s(list, &ft_putstr, '012', &strcmp) = ", exname);
	fflush(stdout);
	ft_list_foreach_if(base, &ft_putstr, "012", &strcmp);
	printf(" (012 attendu)");
#endif

	exnb++;
#ifdef ex11
	start_exo(exnb);
	exname = "ft_list_find";
	base = ft_create_elem("012");
	base->next = ft_create_elem("ABC");
	base->next->next = ft_create_elem("xyz");

	printf("list : ");
	ft_print_list(base);
	printf("%s(list, 'ABC', &strcmp) = ", exname);
	fflush(stdout);
	ft_print_list(ft_list_find(base, "ABC", &strcmp));
#endif

	exnb++;
#ifdef ex12
	start_exo(exnb);
	exname = "ft_list_remove_if";
	base = ft_create_elem("012");
	base->next = ft_create_elem("ABC");
	base->next->next = ft_create_elem("xyz");

	printf("list : ");
	ft_print_list(base);
	printf("%s(list, 'ABC', &strcmp) = ", exname);
	fflush(stdout);
	ft_list_remove_if(&base, "ABC", &strcmp);
	ft_print_list(base);
#endif

t_list	*list1;
t_list	*list2;
	exnb++;
#ifdef ex13
	start_exo(exnb);
	exname = "ft_list_merge";
	ft_warning1();

	list1 = NULL;
	list2 = NULL;
	printf("list1 : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("list2 : ");
	fflush(stdout);
	ft_print_list(list2);
	ft_list_merge(&list1, list2);
	printf("merge : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("\n");

	list1 = NULL;
	list2 = ft_create_elem("012");
	printf("list1 : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("list2 : ");
	fflush(stdout);
	ft_print_list(list2);
	ft_list_merge(&list1, list2);
	printf("merge : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("\n");

	list1 = ft_create_elem("012");
	list2 = NULL;
	printf("list1 : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("list2 : ");
	fflush(stdout);
	ft_print_list(list2);
	ft_list_merge(&list1, list2);
	printf("merge : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("\n");

	list1 = ft_create_elem("012");
	list1->next = ft_create_elem("345");
	list2 = ft_create_elem("abc");
	list2->next = ft_create_elem("def");
	printf("list1 : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("list2 : ");
	fflush(stdout);
	ft_print_list(list2);
	ft_list_merge(&list1, list2);
	printf("merge : ");
	fflush(stdout);
	ft_print_list(list1);
#endif

	exnb++;
#ifdef ex14
	start_exo(exnb);
	exname = "ft_list_sort";
	printf("%s\n", exname);
	ft_warning1();

	base = NULL;
	printf("avant : ");
	fflush(stdout);
	ft_print_list(base);
	ft_list_sort(&base, &strcmp);
	printf("apres : ");
	fflush(stdout);
	ft_print_list(base);
	printf("\n");

	base = ft_create_elem("3");
	base->next = ft_create_elem("1");
	base->next->next = ft_create_elem("2");
	printf("avant : ");
	fflush(stdout);
	ft_print_list(base);
	ft_list_sort(&base, &strcmp);
	printf("apres : ");
	fflush(stdout);
	ft_print_list(base);
#endif

	exnb++;
#ifdef ex15
	start_exo(exnb);
	exname = "ft_list_reverse_fun";

	base = NULL;
	printf("%s\n", exname);
	printf("avant : ");
	ft_print_list(base);
	ft_list_reverse_fun(base);
	printf("apres : ");
	ft_print_list(base);
	printf("\n");

	base = ft_create_elem("1");
	base->next = ft_create_elem("2");
	base->next->next = ft_create_elem("3");
	printf("avant : ");
	ft_print_list(base);
	ft_list_reverse_fun(base);
	printf("apres : ");
	ft_print_list(base);
	printf("\n");

	base = ft_create_elem("1");
	base->next = ft_create_elem("2");
	base->next->next = ft_create_elem("3");
	base->next->next->next = ft_create_elem("4");
	printf("avant : ");
	ft_print_list(base);
	ft_list_reverse_fun(base);
	printf("apres : ");
	ft_print_list(base);
#endif

	exnb++;
#ifdef ex16
	start_exo(exnb);
	exname = "ft_sorted_list_insert";
	printf("%s\n", exname);
	ft_warning1();

	base = ft_create_elem("2");
	base->next = ft_create_elem("3");
	base->next->next = ft_create_elem("5");
	printf("avant : ");
	fflush(stdout);
	ft_print_list(base);
	ft_sorted_list_insert(&base, "7", &strcmp);
	printf("apres : ");
	fflush(stdout);
	ft_print_list(base);

	base = NULL;
	printf("\navant : ");
	fflush(stdout);
	ft_print_list(base);
	ft_sorted_list_insert(&base, "0", &strcmp);
	printf("apres : ");
	fflush(stdout);
	ft_print_list(base);

#endif

	exnb++;
#ifdef ex17
	start_exo(exnb);
	exname = "ft_sorted_list_merge";
	printf("%s\n", exname);
	ft_warning1();

	list1 = NULL;
	list2 = NULL;
	printf("list1 : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("list2 : ");
	fflush(stdout);
	ft_print_list(list2);
	ft_sorted_list_merge(&list1, list2, &strcmp);
	printf("merge : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("\n");

	list1 = NULL;
	list2 = ft_create_elem("0");
	printf("list1 : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("list2 : ");
	fflush(stdout);
	ft_print_list(list2);
	ft_sorted_list_merge(&list1, list2, &strcmp);
	printf("merge : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("\n");

	list1 = ft_create_elem("0");
	list2 = NULL;
	printf("list1 : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("list2 : ");
	fflush(stdout);
	ft_print_list(list2);
	ft_sorted_list_merge(&list1, list2, &strcmp);
	printf("merge : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("\n");

	list1 = ft_create_elem("0");
	list1->next = ft_create_elem("2");
	list2 = ft_create_elem("1");
	list2->next = ft_create_elem("3");
	printf("list1 : ");
	fflush(stdout);
	ft_print_list(list1);
	printf("list2 : ");
	fflush(stdout);
	ft_print_list(list2);
	ft_sorted_list_merge(&list1, list2, &strcmp);
	printf("merge : ");
	fflush(stdout);
	ft_print_list(list1);
#endif
}
