/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct_j00_by_jack.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhalford <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 23:29:00 by jhalford          #+#    #+#             */
/*   Updated: 2016/08/20 11:17:30 by jhalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corrlib.h"

#ifdef ex00
#include "ex00/ft_iterative_factorial.c"
#endif
#ifdef ex01
#include "ex01/ft_recursive_factorial.c"
#endif
#ifdef ex02
#include "ex02/ft_iterative_power.c"
#endif
#ifdef ex03
#include "ex03/ft_recursive_power.c"
#endif
#ifdef ex04
#include "ex04/ft_fibonacci.c"
#endif
#ifdef ex05
#include "ex05/ft_sqrt.c"
#endif
#ifdef ex06
#include "ex06/ft_is_prime.c"
#endif
#ifdef ex07
#include "ex07/ft_find_next_prime.c"
#endif
#ifdef ex08
#include "ex08/ft_eight_queens_puzzle.c"
#endif
#ifdef ex09
#include "ex09/ft_eight_queens_puzzle_2.c"
#endif

int		main(void)
{
	int		err = 0;
	char	*exname;
	int		exnb = 0;;

	err = 0;
	exname = "test";
	start_day(4);
#ifdef ex00
	exname = "ft_iterative_factorial";
	exnb = 0;
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("0",ft_iterative_factorial(0),1,exnb,exname);
	err += ft_test_ex("1",ft_iterative_factorial(1),1,exnb,exname);
	err += ft_test_ex("2",ft_iterative_factorial(2),2,exnb,exname);
	err += ft_test_ex("3",ft_iterative_factorial(3),6,exnb,exname);
	err += ft_test_ex("5",ft_iterative_factorial(5),120,exnb,exname);
	err += ft_test_ex("12",ft_iterative_factorial(12),479001600,exnb,exname);
	err += ft_test_ex("13",ft_iterative_factorial(13),0,exnb,exname);
	err += ft_test_ex("-42",ft_iterative_factorial(-42),0,exnb,exname);
	if (!err)
		print_ok();
#endif

exnb++;
#ifdef ex01
	exname = "ft_recursive_factorial";
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("0",ft_recursive_factorial(0),1,exnb,exname);
	err += ft_test_ex("1",ft_recursive_factorial(1),1,exnb,exname);
	err += ft_test_ex("2",ft_recursive_factorial(2),2,exnb,exname);
	err += ft_test_ex("3",ft_recursive_factorial(3),6,exnb,exname);
	err += ft_test_ex("5",ft_recursive_factorial(5),120,exnb,exname);
	err += ft_test_ex("12",ft_recursive_factorial(12),479001600,exnb,exname);
	err += ft_test_ex("13",ft_recursive_factorial(13),0,exnb,exname);
	err += ft_test_ex("-42",ft_recursive_factorial(-42),0,exnb,exname);
	if (!err)
		print_ok();
#endif

exnb++;
#ifdef ex02
	exname = "ft_iterative_power";
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("0,0",ft_iterative_power(0,0),1,exnb,exname);
	err += ft_test_ex("0,1",ft_iterative_power(0,1),0,exnb,exname);
	err += ft_test_ex("1,0",ft_iterative_power(1,0),1,exnb,exname);
	err += ft_test_ex("1,100",ft_iterative_power(1,100),1,exnb,exname);
	err += ft_test_ex("3,4",ft_iterative_power(3,4),81,exnb,exname);
	err += ft_test_ex("1,-4",ft_iterative_power(1,-4),0,exnb,exname);
	err += ft_test_ex("-2,4",ft_iterative_power(-2,4),16,exnb,exname);
	err += ft_test_ex("-2,3",ft_iterative_power(-2,3),-8,exnb,exname);
	if (!err)
		print_ok();
#endif

exnb++;
#ifdef ex03
	exname = "ft_recursive_power";
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("0,0",ft_recursive_power(0,0),1,exnb,exname);
	err += ft_test_ex("0,1",ft_recursive_power(0,1),0,exnb,exname);
	err += ft_test_ex("1,0",ft_recursive_power(1,0),1,exnb,exname);
	err += ft_test_ex("1,100",ft_recursive_power(1,100),1,exnb,exname);
	err += ft_test_ex("3,4",ft_recursive_power(3,4),81,exnb,exname);
	err += ft_test_ex("1,-4",ft_recursive_power(1,-4),0,exnb,exname);
	err += ft_test_ex("-2,4",ft_recursive_power(-2,4),16,exnb,exname);
	err += ft_test_ex("-2,3",ft_recursive_power(-2,3),-8,exnb,exname);
	if (!err)
		print_ok();
#endif

exnb++;
#ifdef ex04
	exname = "ft_fibonacci";
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("-1",ft_fibonacci(-1),-1,exnb,exname);
	err += ft_test_ex("0",ft_fibonacci(0),0,exnb,exname);
	err += ft_test_ex("1",ft_fibonacci(1),1,exnb,exname);
	err += ft_test_ex("2",ft_fibonacci(2),1,exnb,exname);
	err += ft_test_ex("3",ft_fibonacci(3),2,exnb,exname);
	err += ft_test_ex("4",ft_fibonacci(4),3,exnb,exname);
	err += ft_test_ex("5",ft_fibonacci(5),5,exnb,exname);
	/* err += ft_test_ex("46",ft_fibonacci(46),0,exnb,exname); */
	/* err += ft_test_ex("47",ft_fibonacci(47),0,exnb,exname); */
	if (!err)
		print_ok();
#endif

exnb++;
#ifdef ex05
	exname = "ft_sqrt";
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("-4",ft_sqrt(-4),0,exnb,exname);
	err += ft_test_ex("0",ft_sqrt(0),0,exnb,exname);
	err += ft_test_ex("3",ft_sqrt(3),0,exnb,exname);
	err += ft_test_ex("4",ft_sqrt(4),2,exnb,exname);
	err += ft_test_ex("143",ft_sqrt(143),0,exnb,exname);
	err += ft_test_ex("144",ft_sqrt(144),12,exnb,exname);
	err += ft_test_ex("145",ft_sqrt(145),0,exnb,exname);
	err += ft_test_ex("146",ft_sqrt(146),0,exnb,exname);
	err += ft_test_ex("147",ft_sqrt(147),0,exnb,exname);
	err += ft_test_ex("2147483647",ft_sqrt(2147483647),0,exnb,exname);
	err += ft_test_ex("2077627561",ft_sqrt(2077627561),45581,exnb,exname);
	if (!err)
		print_ok();
#endif

exnb++;
#ifdef ex06
	exname = "ft_is_prime";
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("-42",ft_is_prime(-42),0,exnb,exname);
	err += ft_test_ex("0",ft_is_prime(0),0,exnb,exname);
	err += ft_test_ex("1",ft_is_prime(1),0,exnb,exname);
	err += ft_test_ex("2",ft_is_prime(2),1,exnb,exname);
	err += ft_test_ex("3",ft_is_prime(3),1,exnb,exname);
	err += ft_test_ex("4",ft_is_prime(4),0,exnb,exname);
	err += ft_test_ex("17",ft_is_prime(17),1,exnb,exname);
	err += ft_test_ex("104729",ft_is_prime(104729),1,exnb,exname);
	err += ft_test_ex("146",ft_is_prime(146),0,exnb,exname);
	err += ft_test_ex("147",ft_is_prime(147),0,exnb,exname);
	err += ft_test_ex("148",ft_is_prime(148),0,exnb,exname);
	err += ft_test_ex("149",ft_is_prime(149),1,exnb,exname);
	err += ft_test_ex("289",ft_is_prime(289),0,exnb,exname);
	err += ft_test_ex("361",ft_is_prime(361),0,exnb,exname);
	err += ft_test_ex("529",ft_is_prime(529),0,exnb,exname);
	err += ft_test_ex("961",ft_is_prime(961),0,exnb,exname);
	if (!err)
		print_ok();
#endif

exnb++;
#ifdef ex07
	exname = "ft_find_next_prime";
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("-42",ft_find_next_prime(-42),2,exnb,exname);
	err += ft_test_ex("0",ft_find_next_prime(0),2,exnb,exname);
	err += ft_test_ex("1",ft_find_next_prime(1),2,exnb,exname);
	err += ft_test_ex("2",ft_find_next_prime(2),2,exnb,exname);
	err += ft_test_ex("3",ft_find_next_prime(3),3,exnb,exname);
	err += ft_test_ex("4",ft_find_next_prime(4),5,exnb,exname);
	err += ft_test_ex("17",ft_find_next_prime(17),17,exnb,exname);
	err += ft_test_ex("104729",ft_find_next_prime(104729),104729,exnb,exname);
	err += ft_test_ex("104730",ft_find_next_prime(104730),104743,exnb,exname);
	err += ft_test_ex("146",ft_find_next_prime(146),149,exnb,exname);
	err += ft_test_ex("147",ft_find_next_prime(147),149,exnb,exname);
	err += ft_test_ex("288",ft_find_next_prime(288),293,exnb,exname);
	err += ft_test_ex("960",ft_find_next_prime(960),967,exnb,exname);
	if (!err)
		print_ok();
#endif

exnb++;
#ifdef ex08
	exname = "ft_eight_queens_puzzle";
	start_exo(exnb);
	err = 0;
	err += ft_test_ex("",ft_eight_queens_puzzle(),92,exnb,exname);
	if (!err)
		print_ok();
#endif

exnb++;
#ifdef ex09
	exname = "ft_eight_queens_puzzle2";
	start_exo(exnb);
	ft_eight_queens_puzzle_2();
#endif
}
