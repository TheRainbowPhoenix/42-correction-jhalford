/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_j00_by_jack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:29:00 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/03 17:30:28 by jhalford         ###   ########.fr       */
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
#include "ex04/ft_ultimate_div_mod"
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
	printf("correction d02 by Jack\n");
	printf("----------------------\n");

	#ifdef ex00
	start_exo(0);
	int	*nbr = 30
	ft_ft();
	err += ft_int_test(nbr, 42);
	if (err)
		printf("ft_ft() ne fonctionne pas");
	else
		printf("Tests OK");
	#endif
}
