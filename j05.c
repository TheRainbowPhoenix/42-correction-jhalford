/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_j00_by_jack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:29:00 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/06 18:29:43 by jhalford         ###   ########.fr       */
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
#include "ex21/ft_atoi_base.c"
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
	char	a[100];
	char	b[100];
	char	in[100];

	start_day(5);
#ifdef ex00
	exnb = 0;
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

	exnb++;
#ifdef ex01
	start_exo(exnb);
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

	exnb++;
#ifdef ex02
	exname = "ft_atoi";
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

	exnb++;
#ifdef ex03
	exname = "ft_strcpy";
	start_exo(exnb);
	err = 0;
	strcpy(a, "a");
	strcpy(b, "short");
	init_in(in, a, b);
	err += ft_test_ex2(in, ft_strcpy(a, b), strcpy(a, b), exnb, exname);
	strcpy(a, "test");
	strcpy(b, "this is a longer string.");
	init_in(in, a, b);
	err += ft_test_ex2(in, ft_strcpy(a, b), strcpy(a, b), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex04
	exname = "ft_strncpy";
	start_exo(exnb);
	err = 0;
	strcpy(a, "first str");
	strcpy(b, "second part");
	init_in(in, a, b);
	strcat(in, ", 3");
	err += ft_test_ex2(in, ft_strncpy(a, b, 3), strncpy(a, b, 3), exnb, exname);
	strcpy(a, "first str");
	strcpy(b, "second part");
	init_in(in, a, b);
	strcat(in, ", 12");
	err += ft_test_ex2(in, ft_strncpy(a, b, 12), strncpy(a, b, 12), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex05
	exname = "ft_strstr";
	start_exo(exnb);
	err = 0;
	strcpy(a, "this is a haystack");
	strcpy(b, "haystack");
	init_in(in, a, b);
	err += ft_test_ex2(in, ft_strstr(a, b), strstr(a, b), exnb, exname);
	strcpy(a, "this is a haystack");
	strcpy(b, "is");
	init_in(in, a, b);
	err += ft_test_ex2(in, ft_strstr(a, b), strstr(a, b), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex06
#endif

	exnb++;
#ifdef ex07
#endif

	exnb++;
#ifdef ex08
#endif

	exnb++;
#ifdef ex09
#endif

	exnb++;
#ifdef ex10
#endif

	exnb++;
#ifdef ex11
	exname = "ft_str_is_alpha";
	start_exo(exnb);
	err = 0;
	strcpy(a, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	err += ft_test_ex(a, ft_str_is_alpha(a), 1, exnb, exname);
	strcpy(a, "abcdefghijklmnopqrstuvwxyz");
	err += ft_test_ex(a, ft_str_is_alpha(a), 1, exnb, exname);
	strcpy(a, "contientPasSeuLementDesLettres[");
	err += ft_test_ex(a, ft_str_is_alpha(a), 0, exnb, exname);
	strcpy(a, "0contientpasSeuLementDeLettres");
	err += ft_test_ex(a, ft_str_is_alpha(a), 0, exnb, exname);
	strcpy(a, "");
	err += ft_test_ex(a, ft_str_is_alpha(a), 1, exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex12
	exname = "ft_str_is_numeric";
	start_exo(exnb);
	err = 0;
	strcpy(a, "0123456789");
	err += ft_test_ex(a, ft_str_is_numeric(a), 1, exnb, exname);
	strcpy(a, "0123456789a");
	err += ft_test_ex(a, ft_str_is_numeric(a), 0, exnb, exname);
	strcpy(a, "");
	err += ft_test_ex(a, ft_str_is_numeric(a), 1, exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex13
	exname = "ft_str_is_lowercase";
	start_exo(exnb);
	err = 0;
	strcpy(a, "abcdefghijklmnopqrstuvwxyz");
	err += ft_test_ex(a, ft_str_is_lowercase(a), 1, exnb, exname);
	strcpy(a, "abcdefghijklmnopqrstuvwxyz0");
	err += ft_test_ex(a, ft_str_is_lowercase(a), 0, exnb, exname);
	strcpy(a, "");
	err += ft_test_ex(a, ft_str_is_lowercase(a), 1, exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex14
	exname = "ft_str_is_uppercase";
	start_exo(exnb);
	err = 0;
	strcpy(a, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	err += ft_test_ex(a, ft_str_is_uppercase(a), 1, exnb, exname);
	strcpy(a, "ABCDEFGHIJKLMNOPQRSTUVWXYZ0");
	err += ft_test_ex(a, ft_str_is_uppercase(a), 0, exnb, exname);
	strcpy(a, "");
	err += ft_test_ex(a, ft_str_is_uppercase(a), 1, exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex15
	exname = "ft_str_is_printable";
	start_exo(exnb);
	err = 0;
	strcpy(a, "ABCDEFGHIJKLMNOPQRSTUVWXYZ");
	err += ft_test_ex(a, ft_str_is_printable(a), 1, exnb, exname);
	strcpy(a, "ABCDEFGHIJKLMNOPQRSTUVWXYZ0");
	err += ft_test_ex(a, ft_str_is_printable(a), 1, exnb, exname);
	strcpy(a, "0123\x1F abc");
	err += ft_test_ex(a, ft_str_is_printable(a), 0, exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex16
	exname = "ft_strcat";
	start_exo(exnb);
	err = 0;
	strcpy(a, "first part of str");
	strcpy(b, "second part");
	init_in(in, a, b);
	err += ft_test_ex2(in, ft_strcat(a, b), strcat(a, b), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex17
	exname = "ft_strncat";
	start_exo(exnb);
	err = 0;
	strcpy(a, "first part of str");
	strcpy(b, "second part");
	init_in(in, a, b);
	strcat(in, ", 3");
	err += ft_test_ex2(in, ft_strncat(a, b, 3), strncat(a, b, 3), exnb, exname);
	strcpy(a, "first part of str");
	strcpy(b, "second part");
	init_in(in, a, b);
	strcat(in, ", 10");
	err += ft_test_ex2(in, ft_strncat(a, b, 10), strncat(a, b, 10), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex18
#endif

	exnb++;
#ifdef ex19
#endif

	exnb++;
#ifdef ex20
#endif

	exnb++;
#ifdef ex21
#endif

	exnb++;
#ifdef ex22
#endif

	exnb++;
#ifdef ex23
#endif

}
