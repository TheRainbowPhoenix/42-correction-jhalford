/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corrlib.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 16:05:29 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/20 11:16:26 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORRLIB_H
#define CORRLIB_H
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		corr_ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	corr_ft_putstr(void *str)
{
	write(1, (char *)str, corr_ft_strlen((char *)str));
}

void	ft_put1char(void *str)
{
	write(1, str, 1);
}

void	start_day(int num)
{
	printf("----------------------\n");
	printf("   correction day %02d\n", num);
	printf("----------------------\n");
}

void	start_exo(int num)
{
	printf("\nAppuie sur Entrée pour continuer\n");
	getchar();
	printf("\nex%02d:\n", num);
}

void	print_ok()
{
	printf("tests OK\n");
	fflush(stdout);
}

void	doesnt_work(int exnb)
{
	printf("ex%02d ne fonctionne pas:\n", exnb);
}

int		ft_test_ex(char *in, int out, int correct, int exnb, char *exname)
{
	if (out != correct)
	{
		doesnt_work(exnb);
		printf("%s(%s) = %i (%i attendu)\n", exname, in, out, correct);
		return 1;
	}
	else
		return 0;
}

int		ft_test_ex2(char *in, char *out, char *correct, int exnb, char *exname)
{
	if (strcmp(out, correct))
	{
		doesnt_work(exnb);
		printf("%s(%s) = '%s' ('%s' attendu)\n", exname, in, out, correct);
		return 1;
	}
	else
		return 0;
}

int		ft_int_test(int a, int b)
{
	if (a == b)
		return (0);
	else
		return (1);
}

void	init_in(char *in, char *a, char *b)
{
	strcpy(in, "'");
	strcat(in, a);
	strcat(in, "', '");
	strcat(in, b);
	strcat(in, "'");
}
#endif
