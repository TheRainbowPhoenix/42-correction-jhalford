/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_j00_by_jack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:29:00 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/06 15:36:53 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corrlib.h"

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
#include "ex13/ft_str_is_lowercase.c"
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

int		main(void)
{
	int		err = 0;
	char	*exname;
	int		exnb;

	start_day(5);
#ifdef ex00
	exnb = 1;
	start_exo(exnb);

	char str5[100] = "voila une chaine";
	printf("ft_putstr(%s): '", str5);
	fflush(stdout);
	ft_putstr(str5);
	printf("'\n");

	strcpy(str5, "\ttest\t2");
	printf("ft_putstr(%s): '", str5);
	fflush(stdout);
	ft_putstr(str5);
	printf("'\n");
#endif

#ifdef ex01
	exnb = 1;
	start_exo(1);
	printf("ft_putnbr(-10) = ");
	fflush(stdout);
	ft_putnbr(-10);
	printf("\n");

	printf("ft_putnbr(0) = ");
	fflush(stdout);
	ft_putnbr(0);
	printf("\n");

	printf("ft_putnbr(10) = ");
	fflush(stdout);
	ft_putnbr(10);
	printf("\n");

	printf("ft_putnbr(-2147483647) = ");
	fflush(stdout);
	ft_putnbr(-2147483647);
	printf("\n");

	printf("ft_putnbr(-2147483648) = ");
	fflush(stdout);
	ft_putnbr(-2147483648);
	printf("\n");

	printf("ft_putnbr(2147483647) = ");
	fflush(stdout);
	ft_putnbr(2147483647);
	printf("\n");
#endif

#ifdef ex02
	exname = "ft_atoi";
	exnb = 2;
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("02147483647",ft_atoi("02147483647"),2147483647,exnb,exname);
	err += ft_test_ex("a12",ft_atoi("a12"),0,exnb,exname);
	err += ft_test_ex("\t 21u",ft_atoi("\t 21u"),21,exnb,exname);
	err += ft_test_ex(" \v-12",ft_atoi(" \v-12"),-12,exnb,exname);
	err += ft_test_ex("-1-12",ft_atoi("-1-12"),-1,exnb,exname);
	err += ft_test_ex("--12",ft_atoi("--12"),0,exnb,exname);
	if (err == 0)
		print_ok();
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
