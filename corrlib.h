#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	start_day(int num)
{
	printf("----------------------\n");
	printf("   correction day %02d\n", num);
	printf("----------------------\n");
	printf("  appuie sur Entrée !\n");
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

int		ft_test_ex(char *in, int out, int nb, int exnb, char *exname)
{
	if (out != nb)
	{
		printf("ex%02d ne fonctionne pas:\n", exnb);
		printf("%s(%s) = %i (%i attendu)\n", exname, in, out, nb);
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
