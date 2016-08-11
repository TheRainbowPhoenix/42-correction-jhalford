/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_j00_by_jack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:29:00 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/11 15:25:52 by jhalford         ###   ########.fr       */
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
	int		err;
	char	*exname;
	int		exnb = 0;
	char	a[100];
	char	b[100];
	char	in[100];

	strcpy(a, "test");
	strcpy(b, "test");
	strcpy(in, "test");
	err = 0;
	start_day(5);
	exname = "test";
#ifdef ex00
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
	exname = "ft_strcmp";
	start_exo(exnb);
	err = 0;
	strcpy(a, "string1");
	strcpy(b, "string2");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_strcmp(a, b), strcmp(a, b), exnb, exname);
	strcpy(a, "");
	strcpy(b, "\tstring2");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_strcmp(a, b), strcmp(a, b), exnb, exname);
	strcpy(a, "");
	strcpy(b, "");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_strcmp(a, b), strcmp(a, b), exnb, exname);
	strcpy(a, "ABCDEF");
	strcpy(b, "ABCD");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_strcmp(a, b), strcmp(a, b), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex07
	exname = "ft_strncmp";
	start_exo(exnb);
	err = 0;
	strcpy(a, "string1");
	strcpy(b, "string2");
	init_in(in, a, b);
	strcat(a, ", 0");
	err += ft_test_ex(in, ft_strncmp(a, b, 0), strncmp(a, b, 0), exnb, exname);
	strcpy(a, "");
	strcpy(b, "\tstring2");
	init_in(in, a, b);
	strcat(a, ", 20");
	err += ft_test_ex(in, ft_strncmp(a, b, 20), strncmp(a, b, 20), exnb, exname);
	strcpy(a, "");
	strcpy(b, "");
	init_in(in, a, b);
	strcat(a, ", 2");
	err += ft_test_ex(in, ft_strncmp(a, b, 2), strncmp(a, b, 2), exnb, exname);
	strcpy(a, "ABCDEF");
	strcpy(b, "ABCD");
	init_in(in, a, b);
	strcat(a, ", 2");
	err += ft_test_ex(in, ft_strncmp(a, b, 2), strncmp(a, b, 2), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex08
	exname = "ft_strupcase";
	start_exo(exnb);
	err = 0;
	strcpy(a, "abcdef");
	err += ft_test_ex2(a, ft_strupcase(a), "ABCDEF", exnb, exname);
	strcpy(a, "ABCDeF");
	err += ft_test_ex2(a, ft_strupcase(a), "ABCDEF", exnb, exname);
	strcpy(a, "01234a");
	err += ft_test_ex2(a, ft_strupcase(a), "01234A", exnb, exname);
	strcpy(a, "");
	err += ft_test_ex2(a, ft_strupcase(a), "", exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex09
	exname = "ft_strlowcase";
	start_exo(exnb);
	err = 0;
	strcpy(a, "ABCDEF");
	err += ft_test_ex2(a, ft_strlowcase(a), "abcdef", exnb, exname);
	strcpy(a, "ABCdEF");
	err += ft_test_ex2(a, ft_strlowcase(a), "abcdef", exnb, exname);
	strcpy(a, "01234A");
	err += ft_test_ex2(a, ft_strlowcase(a), "01234a", exnb, exname);
	strcpy(a, "");
	err += ft_test_ex2(a, ft_strlowcase(a), "", exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex10
	exname = "ft_strcapitalize";
	start_exo(exnb);
	err = 0;
	strcpy(a, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	strcpy(b, "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un");
	err += ft_test_ex2(a, ft_strcapitalize(b), "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un", exnb, exname);
	if (!err)
		print_ok();
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
	exname = "ft_strlcat";
	start_exo(exnb);
	err = 0;

	strcpy(a, "this is 10\0");
	strcpy(b, "this 6\0");
	init_in(in, a, b);
	strcat(in, ", 10");
	err += ft_test_ex(in, ft_strlcat(a, b, 10), strlcat(a, b, 10), exnb, exname);

	strcpy(a, "this 6\0");
	strcpy(b, "this is 10\0");
	init_in(in, a, b);
	strcat(in, ", 5");
	err += ft_test_ex(in, ft_strlcat(a, b, 5), strlcat(a, b, 5), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex19
	exname = "ft_strlcpy";
	start_exo(exnb);
	err = 0;

	strcpy(a, "this is 10");
	strcpy(b, "this 6");
	init_in(in, a, b);
	strcat(in, ", 2");
	err += ft_test_ex(in, ft_strlcpy(a, b, 2), strlcpy(a, b, 2), exnb, exname);

	strcpy(a, "this 6");
	strcpy(b, "this is 10");
	init_in(in, a, b);
	strcat(in, ", 10");
	err += ft_test_ex(in, ft_strlcpy(a, b, 10), strlcpy(a, b, 10), exnb, exname);

	strcpy(a, "this 6");
	strcpy(b, "this is 10");
	init_in(in, a, b);
	strcat(in, ", 15");
	err += ft_test_ex(in, ft_strlcpy(a, b, 15), strlcpy(a, b, 15), exnb, exname);

	strcpy(a, "this 6");
	strcpy(b, "this is 10");
	init_in(in, a, b);
	strcat(in, ", 99");
	err += ft_test_ex(in, ft_strlcpy(a, b, 99), strlcpy(a, b, 99), exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex20
	exname = "ft_putnbr_base";
	start_exo(exnb);
	err = 0;
	int		nb20 = 456;
	char	base[100] = "012";
	int		min_int = -2147483648; 
	printf("ft_putnbr_base(%i, '%s') = ", min_int, "0123456789");
	fflush(stdout);
	ft_putnbr_base(min_int, "0123456789");
	printf(" (-2147483648 attendu)\n");

	printf("ft_putnbr_base(%i, '%s') = ", nb20, base);
	fflush(stdout);
	ft_putnbr_base(nb20, base);
	printf(" (121220 attendu)\n");

	strcpy(base, "ABCD");
	printf("ft_putnbr_base(%i, '%s') = ", -nb20, base);
	fflush(stdout);
	ft_putnbr_base(-nb20, base);
	printf(" (-BDACA attendu)\n");

	strcpy(base, "ABCD");
	printf("ft_putnbr_base(%i, '%s') = ", nb20, base);
	fflush(stdout);
	ft_putnbr_base(nb20, base);
	printf(" (BDACA attendu)\n");

	strcpy(base, "abcde");
	printf("ft_putnbr_base(%i, '%s') = ", nb20, base);
	fflush(stdout);
	ft_putnbr_base(nb20, base);
	printf(" (ddbb attendu)\n");

	strcpy(base, "qwerty");
	printf("ft_putnbr_base(%i, '%s') = ", nb20, base);
	fflush(stdout);
	ft_putnbr_base(nb20, base);
	printf(" (eqtq attendu)\n");

	strcpy(base, "abc+e");
	printf("ft_putnbr_base(%i, '%s') = ", nb20, base);
	fflush(stdout);
	ft_putnbr_base(nb20, base);
	printf(" ('' attendu)\n");

	strcpy(base, "012345678-");
	printf("ft_putnbr_base('%i', '%s') = ", nb20, base);
	fflush(stdout);
	ft_putnbr_base(nb20, base);
	printf(" ('' attendu)\n");

	strcpy(base, "abcee");
	printf("ft_putnbr_base('%i', '%s') = ", nb20, base);
	fflush(stdout);
	ft_putnbr_base(nb20, base);
	printf(" ('' attendu)\n");
#endif

	exnb++;
#ifdef ex21
	exname = "ft_atoi_base";
	start_exo(exnb);
	err = 0;

	strcpy(a, "++2a");
	strcpy(b, "0123456789ABCDEF");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 0, exnb, exname);

	strcpy(a, "2-a");
	strcpy(b, "0123456789ABCDEF");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 0, exnb, exname);

	strcpy(a, "2a");
	strcpy(b, "0123456789ABCDEF");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 0, exnb, exname);

	strcpy(a, "1234");
	strcpy(b, "0123456789");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 1234, exnb, exname);

	strcpy(a, "-2147483648");
	strcpy(b, "0123456789");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), -2147483648, exnb, exname);

	strcpy(a, "2147483647");
	strcpy(b, "0123456789");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 2147483647, exnb, exname);

	strcpy(a, "10000");
	strcpy(b, "01");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 16, exnb, exname);

	strcpy(a, "+10000");
	strcpy(b, "01");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 16, exnb, exname);

	strcpy(a, "BDACA");
	strcpy(b, "ABCD");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 456, exnb, exname);

	strcpy(a, "-BDACA");
	strcpy(b, "ABCD");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), -456, exnb, exname);

	strcpy(a, "--BDACA");
	strcpy(b, "ABCD");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 0, exnb, exname);

	strcpy(a, "AAAAA");
	strcpy(b, "A");
	init_in(in, a, b);
	err += ft_test_ex(in, ft_atoi_base(a, b), 0, exnb, exname);
	if (!err)
		print_ok();
#endif

	exnb++;
#ifdef ex22
	start_exo(exnb);
	strcpy(a, "Coucou\ntu\x15vas\x7F bien ?");
	printf("ft_putstr_non_printable('%s') = ", a);
	fflush(stdout);
	ft_putstr_non_printable(a);
	printf("\n(il devrait y avoir \\0a,\\15 et \\7f qui apparaissent dans la sortie ...)\n");
	printf("\n");
#endif

	exnb++;
#ifdef ex23
	start_exo(exnb);
	char	str23[500] = "Salut les aminches c'est cool show mem on fait de truc terrible.\x2e\x0\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0e\x0f\x1b\x7f";
	ft_print_memory(str23, 70);
#endif

}
