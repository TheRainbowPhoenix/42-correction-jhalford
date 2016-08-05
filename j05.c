/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_j00_by_jack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:29:00 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/05 15:02:57 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#ifdef ex00
#include "ex00/ft_putstr.c"
#endif
#ifdef ex01
#include "ex01/ft_putnbr.c"
#endif
#ifdef ex02
#include "ex02/ft_atoi.c"
#endif
#ifdef ex03
#include "ex03/ft_strcpy.c"
#endif
#ifdef ex04
#include "ex04/ft_strncpy.c"
#endif
#ifdef ex05
#include "ex05/ft_strstr.c"
#endif
#ifdef ex06
#include "ex06/ft_strcmp.c"
#endif
#ifdef ex07
#include "ex07/ft_strncmp.c"
#endif
#ifdef ex08
#include "ex08/ft_strupcase.c"
#endif
#ifdef ex09
#include "ex09/ft_strlowcase.c"
#endif
#ifdef ex10
#include "ex10/ft_strcapitalize.c"
#endif
#ifdef ex11
#include "ex11/ft_str_is_alpha.c"
#endif
#ifdef ex12
#include "ex12/ft_str_is_numeric.c"
#endif
#ifdef ex13
#include "ex13/ft_str_is_lozercase.c"
#endif
#ifdef ex14
#include "ex14/ft_str_is_uppercase.c"
#endif
#ifdef ex15
#include "ex15/ft_str_is_printable.c"
#endif
#ifdef ex16
#include "ex16/ft_strcat.c"
#endif
#ifdef ex17
#include "ex17/ft_strncat.c"
#endif
#ifdef ex18
#include "ex18/ft_strlcat.c"
#endif
#ifdef ex19
#include "ex19/ft_strlcpy.c"
#endif
#ifdef ex20
#include "ex20/ft_putnbr_base.c"
#endif
#ifdef ex21
#include "ex21/ft_ft_atoi_base.c"
#endif
#ifdef ex22
#include "ex22/ft_putstr_non_printable.c"
#endif
#ifdef ex23
#include "ex23/ft_print_memory.c"
#endif

void	start_exo(int num)
{
	getchar();
	printf("\nex%02d:\n", num);
}

void	print_ok()
{
	printf("tests OK\n");
	fflush(stdout);
}

/* int		ft_test_ex(char *in, char *out, int nb, int exnb, char *exname) */
/* { */
/* 	if (out != nb) */
/* 	{ */
/* 		printf("ex%02d ne fonctionne pas:\n", exnb); */
/* 		printf("%s(%s) = %i (%i attendu)\n", exname, in, out, nb); */
/* 		return 1; */
/* 	} */
/* 	else */
/* 		return 0; */
/* } */

int		ft_cmp_func1(int nb_params, char* (*f1)(), char* (*f2)(), int exnb, char *exname)
{
}

int		main(void)
{
	int		err = 0;
	char	*exname;
	int		exnb;

	printf("----------------------\n");
	printf("    correction d05\n");
	printf("----------------------\n");

#ifdef ex00
#endif

#ifdef ex01
#endif

#ifdef ex02
#endif

#ifdef ex03
#endif

#ifdef ex04
#endif

#ifdef ex05
#endif

#ifdef ex06
#endif

#ifdef ex07
#endif

#ifdef ex08
#endif

#ifdef ex09
#endif
}
