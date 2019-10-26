/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dheredat <dheredat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 16:48:04 by dheredat          #+#    #+#             */
/*   Updated: 2019/10/26 18:21:05 by dheredat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/proto_vlst.h"
#include "limits.h"
/*
int main(void)
{
	
	char    b = '&';
	unsigned int i = -1;

	ft_printf("%4$c %3$d %2$x %1$s","dgreat",12345, 987654321,'Z');

	ft_printf("\n1)|%10c|\n2)|%5c|\n3)|%-4c|\n4)|%05c|\n5)|%# .189c|\n6)|%-c|\n\n",'a','b','c','d','e','f');
	printf("\n1)|%10c|\n2)|%5c|\n3)|%-4c|\n4)|%05c|\n5)|%# .189c|\n6)|%-c|\n",'a','b','c','d','e','f');

	ft_printf("01)|%c| - My 'c'\n", 'a');
    printf("01)|%c| - Orig 'c'\n\n", 'a');

    ft_printf("02)|% c| - My 'c'\n", 'a');
    printf("02)|% c| - Orig 'c'\n\n", 'a');
	
	ft_printf("03)|%15c| - My 'c'\n", 'a');
    printf("03)|%15c| - Orig 'c'\n\n", 'a');

	ft_printf("04)|%-10c| - My 'c'\n", &b);
    printf("04)|%-10c| - Orig 'c'\n\n", &b);
	
	ft_printf("05)|%15.0c| - My 'c'\n", 'a');
    printf("05)|%15.0c| - Orig 'c'\n\n", 'a');
	
	ft_printf("06)|%13.4c| - My 'c'\n", 'a');
    printf("06)|%13.4c| - Orig 'c'\n\n", 'a');
	
	ft_printf("07)|%#15.10c| - My 'c'\n", 'a');
    printf("07)|%#15.10c| - Orig 'c'\n\n", 'a');
	
	ft_printf("08)|%#-15.c| - My 'c'\n", 'a');
    printf("08)|%#-15.c| - Orig 'c'\n\n", 'a');
	
	ft_printf("09)|%#-15.4c| - My 'c'\n", 'a');
    printf("09)|%#-15.4c| - Orig 'c'\n\n", 'a');
	
	ft_printf("10)|%#-15.10c| - My 'c'\n", 'a');
    printf("10)|%#-15.10c| - Orig 'c'\n\n", 'a');
	
	ft_printf("11)|%#- 15.c| - My 'c'\n", 'a');
    printf("11)|%#- 15.c| - Orig 'c'\n\n", 'a');
	
	ft_printf("12)|%#-0 15.6c| - My 'c'\n", 'a');
    printf("12)|%#-0 15.6c| - Orig 'c'\n\n", 'a');
	
	ft_printf("13)|%-+c| - My 'c'\n", 'a');
    printf("13)|%-+c| - Orig 'c'\n\n", 'a');
	
	ft_printf("14)|%#-.13c| - My 'c'\n", 'a');
    printf("14)|%#-.13c| - Orig 'c'\n\n", 'a');
	
	ft_printf("15)|%-.4c| - My 'c'\n", 'a');
    printf("15)|%-.4c| - Orig 'c'\n\n", 'a');
	
	ft_printf("16)|%.13c| - My 'c'\n", 'a');
    printf("16)|%.13c| - Orig 'c'\n\n", 'a');
	
	ft_printf("17)|%.4c| - My 'c'\n", 'a');
    printf("17)|%.4c| - Orig 'c'\n\n", 'a');

	ft_printf("18)|%4c| - My 'c'\n", 'a');
    printf("18)|%4c| - Orig 'c'\n\n", 'a');

	
	printf("1)  |%3.5s|\n", "abcdef");
	ft_printf("1)  |%3.5s|\n", "abcdef");

	printf("2)  |%5.3s|\n", "abcdef");
	ft_printf("2)  |%5.3s|\n", "abcdef");

	printf("3)  |%#s|\n", "abcdef");
	ft_printf("3)  |%#s|\n", "abcdef");

	printf("4)  |%1.10s|\n", "abcdef");
	ft_printf("4)  |%1.10s|\n", "abcdef");

	printf("5)  |%10.1s|\n", "abcdef");
	ft_printf("5)  |%10.1s|\n", "abcdef");

	printf("6)  |%3s|\n", "abcdef");
	ft_printf("6)  |%3s|\n", "abcdef");

	printf("7)  |%.3s|\n", "abcdef");
	ft_printf("7)  |%.3s|\n", "abcdef");

	printf("8)  |%3s|\n", "abcdef");
	ft_printf("8)  |%3s|\n", "abcdef");

	printf("9)  |%7s|\n", "abcdef");
	ft_printf("9)  |%7s|\n", "abcdef");

	printf("10) |%7.3s|\n", "abcdef");
	ft_printf("10) |%7.3s|\n", "abcdef");

	printf("11) |%-7.3s|\n", "abcdef");
	ft_printf("11) |%-7.3s|\n", "abcdef");

	printf("12) |%+-+7.3s|\n", "abcdef");
	ft_printf("12) |%+-+7.3s|\n", "abcdef");

	printf("13) |%s|\n", "abcdef");
	ft_printf("13) |%s|\n", "abcdef");
	

	ft_printf("01)|%s| - My 's'\n", "qwerty");
    printf("01)|%s| - Orig 's'\n\n", "qwerty");

    ft_printf("02)|% s| - My 's'\n", "qwerty");
    printf("02)|% s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("03)|%10s| - My 's'\n", "qwerty");
    printf("03)|%10s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("04)|%-010s| - My 's'\n", "qwerty");
    printf("04)|%-010s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("05)|%15.0s| - My 's'\n", "qwerty");
    printf("05)|%15.0s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("06)|%13.4s| - My 's'\n", "qwerty");
    printf("06)|%13.4s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("07)|%#15.10s| - My 's'\n", "qwerty");
    printf("07)|%#15.10s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("08)|%#-15.s| - My 's'\n", "qwerty");
    printf("08)|%#-15.s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("09)|%#-15.4s| - My 's'\n", "qwerty");
    printf("09)|%#-15.4s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("10)|%#-15.10s| - My 's'\n", "qwerty");
    printf("10)|%#-15.10s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("11)|%#- 15.s| - My 's'\n", "qwerty");
    printf("11)|%#- 15.s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("12)|%#0 15.6s| - My 's'\n", "qwerty");
    printf("12)|%#0 15.6s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("13)|%-+s| - My 's'\n", "qwerty");
    printf("13)|%-+s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("14)|%#-.13s| - My 's'\n", "qwerty");
    printf("14)|%#-.13s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("15)|%-.4s| - My 's'\n", "qwerty");
    printf("15)|%-.4s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("16)|%.13s| - My 's'\n", "qwerty");
    printf("16)|%.13s| - Orig 's'\n\n", "qwerty");
	
	ft_printf("17)|%.4s| - My 's'\n", "qwerty");
    printf("17)|%.4s| - Orig 's'\n\n", "qwerty");

	ft_printf("18)|%4s| - My 's'\n", "qwerty");
    printf("18)|%4s| - Orig 's'\n\n", "qwerty");


	ft_printf("19)|%s| - My 's'\n", NULL);
	printf("19)|%s| - Orig 's'\n\n", NULL);

	ft_printf("20)|%s %s| - My 's'\n", NULL, "qwerty");
	printf("20)|%s %s| - Orig 's'\n\n", NULL, "qwerty");


	ft_printf("01)|%d| - My 'di'\n", i);
    printf("01)|%d| - Orig 'di'\n\n", i);

    ft_printf("02)|% d| - My 'di'\n", 2147483647);
    printf("02)|% d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("03)|%10d| - My 'di'\n", 2147483647);
    printf("03)|%10d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("04)|%-10d| - My 'di'\n", 2147483647);
    printf("04)|%-10d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("05)|%15.0d| - My 'di'\n", 2147483647);
    printf("05)|%15.0d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("06)|%13.4d| - My 'di'\n", 2147483647);
    printf("06)|%13.4d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("07)|%#15.10d| - My 'di'\n", 2147483647);
    printf("07)|%#15.10d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("08)|%#-15.d| - My 'di'\n", 2147483647);
    printf("08)|%#-15.d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("09)|%#-15.4d| - My 'di'\n", 2147483647);
    printf("09)|%#-15.4d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("10)|%#-15.10d| - My 'di'\n", 2147483647);
    printf("10)|%#-15.10d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("11)|%#- 15.d| - My 'di'\n", 2147483647);
    printf("11)|%#- 15.d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("12)|%#-0 15.6d| - My 'di'\n", 2147483647);
    printf("12)|%#-0 15.6d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("13)|%-+d| - My 'di'\n", 2147483647);
    printf("13)|%-+d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("14)|%#-.13d| - My 'di'\n", 2147483647);
    printf("14)|%#-.13d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("15)|%-.4d| - My 'di'\n", 2147483647);
    printf("15)|%-.4d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("16)|%.13d| - My 'di'\n", 2147483647);
    printf("16)|%.13d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("17)|%.4d| - My 'di'\n", 2147483647);
    printf("17)|%.4d| - Orig 'di'\n\n", 2147483647);

	ft_printf("18)|%4d| - My 'di'\n", 2147483647);
    printf("18)|%4d| - Orig 'di'\n\n", 2147483647);
	
	ft_printf("19)|%0.30d| - My 'di'\n", &i);
    printf("19)|%0.30d| - Orig 'di'\n\n", &i);

	ft_printf("20)|%013.12d| - My 'di'\n", &i);
    printf("20)|%013.12d| - Orig 'di'\n\n", &i);

	ft_printf("21)|%14.13d| - My 'di'\n", &i);
    printf("21)|%14.13d| - Orig 'di'\n\n", &i);

	ft_printf("22)|%+ 14.14d| - My 'di'\n", &i);
    printf("22)|%+ 14.14d| - Orig 'di'\n\n", &i);

	ft_printf("23)|%14.14 32.23d| - My 'di'\n", &i);
    printf("23)|%14.14 32.23d| - Orig 'di'\n\n", &i);

	ft_printf("24)|%#-0 28.1d| - My 'di'\n", &i);
    printf("24)|%#-0 28.1d| - Orig 'di'\n\n", &i);

	ft_printf("25)|% 14.14d| - My 'di'\n", &i);
    printf("25)|% 14.14d| - Orig 'di'\n\n", &i);

	ft_printf("26)|%ld| - My 'ldi'\n", 2147483647);
    printf("26)|%ld| - Orig 'ldi'\n\n", 2147483647);
	
	ft_printf("27)|%lld| - My 'lldi'\n", 9223372036854775807);
    printf("27)|%lld| - Orig 'lldi'\n\n", 9223372036854775807);

	ft_printf("28)|%hd| - My 'hdi'\n", 25345);
    printf("28)|%hd| - Orig 'hdi'\n\n", 25345);

	ft_printf("29)|%hhd| - My 'hhdi'\n", 2147483647);
    printf("29)|%hhd| - Orig 'hhdi'\n\n", 2147483647);

	ft_printf("30)|%+d| - My 'di'\n", -42);
	printf("30)|%+d| - Orig 'di'\n\n", -42);

	ft_printf("31)|%+d| - My 'di'\n", 0);
	printf("31)|%+d| - Orig 'di'\n\n", 0);

	ft_printf("32)|%+d| - My 'di'\n", 424242424242424242);
	printf("32)|%+d| - Orig 'di'\n\n", 424242424242424242);

	ft_printf("33)|% +d| - My 'di'\n", -42);
	printf("33)|% +d| - Orig 'di'\n\n", -42);

	ft_printf("34)%lld| - My 'di'\n", -9223372036854775808);
	printf("34)%lld| - Orig 'di'\n\n", -9223372036854775808);
	
	ft_printf("35)|%0+*.*d| - My 'di'\n", 15, 13, 2147483647);
    printf("35)|%0+*.*d| - Orig 'di'\n\n", 15, 13, 2147483647);

	ft_printf("36)|%015d| - My 'di'\n", 2147483647);
    printf("36)|%015d| - Orig 'di'\n\n", 2147483647);

	ft_printf("36)|%.0d| - My 'di'\n", 2147483647);
    printf("36)|%.0d| - Orig 'di'\n\n", 2147483647);

	ft_printf("37)|%+0.d| - My 'di'\n", 0);
    printf("37)|%+0.d| - Orig 'di'\n\n", 0);

	ft_printf("38)|% .d| - My 'di'\n", 0);
    printf("38)|% .d| - Orig 'di'\n\n", 0);

	ft_printf("39)|%010.d| - My 'di'\n", 0);
    printf("39)|%010.d| - Orig 'di'\n\n", 0);

	ft_printf("01)|%u| - My 'u'\n", 2147483647);
    printf("01)|%u| - Orig 'u'\n\n", 2147483647);

    ft_printf("02)|% u| - My 'u'\n", 2147483647);
    printf("02)|% u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("03)|%11u| - My 'u'\n", 2147483647);
    printf("03)|%11u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("04)|%-10u| - My 'u'\n", 2147483647);
    printf("04)|%-10u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("05)|%15u| - My 'u'\n", 2147483647);
    printf("05)|%15u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("06)|%13.4u| - My 'u'\n", 2147483647);
    printf("06)|%13.4u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("07)|%#15.10u| - My 'u'\n", 2147483647);
    printf("07)|%#15.10u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("08)|%#-15.u| - My 'u'\n", 2147483647);
    printf("08)|%#-15.u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("09)|%#-15.4u| - My 'u'\n", 2147483647);
    printf("09)|%#-15.4u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("10)|%#-15.10u| - My 'u'\n", 2147483647);
    printf("10)|%#-15.10u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("11)|%#- 15.u| - My 'u'\n", 2147483647);
    printf("11)|%#- 15.u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("12)|%#-0 15.6u| - My 'u'\n", 2147483647);
    printf("12)|%#-0 15.6u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("13)|%-+u| - My 'u'\n", 2147483647);
    printf("13)|%-+u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("14)|%#-.13u| - My 'u'\n", 2147483647);
    printf("14)|%#-.13u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("15)|%-.4u| - My 'u'\n", 2147483647);
    printf("15)|%-.4u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("16)|%.13u| - My 'u'\n", 2147483647);
    printf("16)|%.13u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("17)|%.4u| - My 'u'\n", 2147483647);
    printf("17)|%.4u| - Orig 'u'\n\n", 2147483647);

	ft_printf("18)|%4u| - My 'u'\n", 2147483647);
    printf("18)|%4u| - Orig 'u'\n\n", 2147483647);
	
	ft_printf("19)|%0.30u| - My 'u'\n", &i);
    printf("19)|%0.30u| - Orig 'u'\n\n", &i);

	ft_printf("20)|%013.12u| - My 'u'\n", &i);
    printf("20)|%013.12u| - Orig 'u'\n\n", &i);

	ft_printf("21)|%14.13u| - My 'u'\n", &i);
    printf("21)|%14.13u| - Orig 'u'\n\n", &i);

	ft_printf("22)|%+ 14.14u| - My 'u'\n", &i);
    printf("22)|%+ 14.14u| - Orig 'u'\n\n", &i);

	ft_printf("23)|%14.14 32.23u| - My 'u'\n", &i);
    printf("23)|%14.14 32.23u| - Orig 'u'\n\n", &i);

	ft_printf("24)|%#-0 28.1u| - My 'u'\n", &i);
    printf("24)|%#-0 28.1u| - Orig 'u'\n\n", &i);

	ft_printf("25)|% 14.14u| - My 'u'\n", &i);
    printf("25)|% 14.14u| - Orig 'u'\n\n", &i);

	ft_printf("26)|%lu| - My 'lu'\n", 2147483647);
    printf("26)|%lu| - Orig 'lu'\n\n", 2147483647);
	
	ft_printf("27)|%llu| - My 'lld'\n", 2147483647);
    printf("27)|%llu| - Orig 'lld'\n\n", 2147483647);

	ft_printf("28)|%hu| - My 'hd'\n", 2147483647);
    printf("28)|%hu| - Orig 'hd'\n\n", 2147483647);

	ft_printf("29)|%hhu| - My 'hhd'\n", 2147483647);
    printf("29)|%hhu| - Orig 'hhd'\n\n", 2147483647);

	ft_printf("30)|%lu| - My 'lu'\n", -42);
    printf("30)|%lu| - Orig 'lu'\n\n", -42);

	ft_printf("01)|%X| - My 'X'\n", i);
    printf("01)|%X| - Orig 'X'\n\n", i);

    ft_printf("02)|% x| - My 'x'\n", i);
    printf("02)|% x| - Orig 'x'\n\n", i);
	
	ft_printf("03)|%20X| - My 'X'\n", i);
    printf("03)|%20X| - Orig 'X'\n\n", i);
	
	ft_printf("04)|%-20x| - My 'x'\n", i);
    printf("04)|%-20x| - Orig 'x'\n\n", i);
	
	ft_printf("05)|%20.0x| - My 'x'\n", i);
    printf("05)|%20.0x| - Orig 'x'\n\n", i);
	
	ft_printf("06)|%27.4X| - My 'X'\n", i);
    printf("06)|%27.4X| - Orig 'X'\n\n", i);
	
	ft_printf("07)|%#24.10x| - My 'x'\n", &i);
    printf("07)|%#24.10x| - Orig 'x'\n\n", &i);
	
	ft_printf("08)|%#-25.x| - My 'x'\n", i);
    printf("08)|%#-25.x| - Orig 'x'\n\n", i);
	
	ft_printf("09)|%#24.14x| - My 'x'\n", i);
    printf("09)|%#24.14x| - Orig 'x'\n\n", i);
	
	ft_printf("10)|%#-26.10x| - My 'x'\n", i);
    printf("10)|%#-26.10x| - Orig 'x'\n\n", i);
	
	ft_printf("11)|%#- 26.x| - My 'x'\n", i);
    printf("11)|%#- 26.x| - Orig 'x'\n\n", i);
	
	ft_printf("12)|%#-0 28.16x| - My 'x'\n", i);
    printf("12)|%#-0 28.16x| - Orig 'x'\n\n", i);
	
	ft_printf("13)|%-+x| - My 'x'\n", i);
    printf("13)|%-+x| - Orig 'x'\n\n", i);
	
	ft_printf("14)|%#-.26x| - My 'x'\n", i);
    printf("14)|%#-.26x| - Orig 'x'\n\n", i);
	
	ft_printf("15)|%-.4x| - My 'x'\n", i);
    printf("15)|%-.4x| - Orig 'x'\n\n", i);
	
	ft_printf("16)|%.16x| - My 'x'\n", i);
    printf("16)|%.16x| - Orig 'x'\n\n", i);
	
	ft_printf("17)|%.4x| - My 'x'\n", i);
    printf("17)|%.4x| - Orig 'x'\n\n", i);

	ft_printf("18)|%030x| - My 'x'\n", i);
    printf("18)|%030x| - Orig 'x'\n\n", i);

	ft_printf("19)|%0.30x| - My 'x'\n", i);
    printf("19)|%0.30x| - Orig 'x'\n\n", i);

	ft_printf("20)|%13.12x| - My 'x'\n", i);
    printf("20)|%13.12x| - Orig 'x'\n\n", i);

	ft_printf("21)|%14.13x| - My 'x'\n", i);
    printf("21)|%14.13x| - Orig 'x'\n\n", i);

	ft_printf("22)|%14.14x| - My 'x'\n", i);
    printf("22)|%14.14x| - Orig 'x'\n\n", i);

	ft_printf("23)|%hX| - My 'hX'\n", i);
    printf("23)|%hX| - Orig 'hX'\n\n", i);

	ft_printf("24)|%hhX| - My 'hhX'\n", i);
    printf("24)|%hhX| - Orig 'hhX'\n\n", i);

	ft_printf("25)|%llX| - My 'llX'\n", i);
    printf("25)|%llX| - Orig 'llX'\n\n", i);

	ft_printf("26)|%lX| - My 'lX'\n", i);
    printf("26)|%lX| - Orig 'lX'\n\n", i);

	ft_printf("27)%#x| - My 'lx'\n", 0);
	printf("27)%#x| - Orig 'lx'\n\n", 0);

	ft_printf("28)%#.x| - My 'x'\n", 0);
	printf("28)%#.x| - Orig 'x'\n\n", 0);

	ft_printf("29)%.0x| - My 'x'\n", 0);
	printf("29)%.0x| - Orig 'x'\n\n", 0);

	ft_printf("30)%5.0x %5.0x| - My 'x'\n", 0, 0);
	printf("30)%5.0x %5.0x| - Orig 'x'\n\n", 0, 0);

	ft_printf("30)%.5x %.5x| - My 'x'\n", 0, 0);
	printf("30)%.5x %.5x| - Orig 'x'\n\n", 0, 0);

	ft_printf("01)|%p| - My 'p'\n", &i);
    printf("01)|%p| - Orig 'p'\n\n", &i);

    ft_printf("02)|% p| - My 'p'\n", &i);
    printf("02)|% p| - Orig 'p'\n\n", &i);
	
	ft_printf("03)|%20p| - My 'p'\n", &i);
    printf("03)|%20p| - Orig 'p'\n\n", &i);
	
	ft_printf("04)|%-20p| - My 'p'\n", &i);
    printf("04)|%-20p| - Orig 'p'\n\n", &i);
	
	ft_printf("05)|%20.0p| - My 'p'\n", &i);
    printf("05)|%20.0p| - Orig 'p'\n\n", &i);
	
	ft_printf("06)|%27.4p| - My 'p'\n", &i);
    printf("06)|%27.4p| - Orig 'p'\n\n", &i);
	
	ft_printf("07)|%#24.10p| - My 'p'\n", &i);
    printf("07)|%#24.10p| - Orig 'p'\n\n", &i);
	
	ft_printf("08)|%#-25.p| - My 'p'\n", &i);
    printf("08)|%#-25.p| - Orig 'p'\n\n", &i);
	
	ft_printf("09)|%#24.14p| - My 'p'\n", &i);
    printf("09)|%#24.14p| - Orig 'p'\n\n", &i);
	
	ft_printf("10)|%#-26.10p| - My 'p'\n", &i);
    printf("10)|%#-26.10p| - Orig 'p'\n\n", &i);
	
	ft_printf("11)|%#- 26.p| - My 'p'\n", &i);
    printf("11)|%#- 26.p| - Orig 'p'\n\n", &i);
	
	ft_printf("12)|%#-0 28.16p| - My 'p'\n", &i);
    printf("12)|%#-0 28.16p| - Orig 'p'\n\n", &i);
	
	ft_printf("13)|%-+p| - My 'p'\n", &i);
    printf("13)|%-+p| - Orig 'p'\n\n", &i);
	
	ft_printf("14)|%#-.26p| - My 'p'\n", &i);
    printf("14)|%#-.26p| - Orig 'p'\n\n", &i);
	
	ft_printf("15)|%-.4p| - My 'p'\n", &i);
    printf("15)|%-.4p| - Orig 'p'\n\n", &i);
	
	ft_printf("16)|%.16p| - My 'p'\n", &i);
    printf("16)|%.16p| - Orig 'p'\n\n", &i);
	
	ft_printf("17)|%.4p| - My 'p'\n", &i);
    printf("17)|%.4p| - Orig 'p'\n\n", &i);

	ft_printf("18)|%030p| - My 'p'\n", &i);
    printf("18)|%030p| - Orig 'p'\n\n", &i);

	ft_printf("19)|%0.30p| - My 'p'\n", &i);
    printf("19)|%0.30p| - Orig 'p'\n\n", &i);

	ft_printf("20)|%13.12p| - My 'p'\n", &i);
    printf("20)|%13.12p| - Orig 'p'\n\n", &i);

	ft_printf("21)|%14.13p| - My 'p'\n", &i);
    printf("21)|%14.13p| - Orig 'p'\n\n", &i);

	ft_printf("22)|%14.14p| - My 'p'\n", &i);
    printf("22)|%14.14p| - Orig 'p'\n\n", &i);

	ft_printf("23)|%14.14 32.23p| - My 'p'\n", &i);
    printf("23)|%14.14 32.23p| - Orig 'p'\n\n", &i);

	ft_printf("24)|%#-28.1lx| - My 'p'\n", &i);
    printf("24)|%#-0 28.1#lp| - Orig 'p'\n\n", &i);

	ft_printf("25)|%#-0 28.1p| - My 'p'\n", -1);
    printf("25)|%#-0 28.1p| - Orig 'p'\n\n", -1);

	ft_printf("01)|%%| - My 'per'\n", &i);
    printf("01)|%%| - Orig 'per'\n\n", &i);

    ft_printf("02)|% %| - My 'per'\n", &i);
    printf("02)|% %| - Orig 'per'\n\n", &i);
	
	ft_printf("03)|%20%| - My 'per'\n", &i);
    printf("03)|%20%| - Orig 'per'\n\n", &i);
	
	ft_printf("04)|%-20%| - My 'per'\n", &i);
    printf("04)|%-20%| - Orig 'per'\n\n", &i);
	
	ft_printf("05)|%20.0%| - My 'per'\n", &i);
    printf("05)|%20.0%| - Orig 'per'\n\n", &i);
	
	ft_printf("06)|%27.4%| - My 'per'\n", &i);
    printf("06)|%27.4%| - Orig 'per'\n\n", &i);
	
	ft_printf("07)|%#24.10%| - My 'per'\n", &i);
    printf("07)|%#24.10%| - Orig 'per'\n\n", &i);
	
	ft_printf("08)|%#-25.%| - My 'per'\n", &i);
    printf("08)|%#-25.%| - Orig 'per'\n\n", &i);
	
	ft_printf("09)|%#24.14%| - My 'per'\n", &i);
    printf("09)|%#24.14%| - Orig 'per'\n\n", &i);
	
	ft_printf("10)|%#-26.10%| - My 'per'\n", &i);
    printf("10)|%#-26.10%| - Orig 'per'\n\n", &i);
	
	ft_printf("11)|%#- 26.%| - My 'per'\n", &i);
    printf("11)|%#- 26.%| - Orig 'per'\n\n", &i);
	
	ft_printf("12)|%#-0 28.16%| - My 'per'\n", &i);
    printf("12)|%#-0 28.16%| - Orig 'per'\n\n", &i);
	
	ft_printf("13)|%-+%| - My 'per'\n", &i);
    printf("13)|%-+%| - Orig 'per'\n\n", &i);
	
	ft_printf("14)|%#-.26%| - My 'per'\n", &i);
    printf("14)|%#-.26%| - Orig 'per'\n\n", &i);
	
	ft_printf("15)|%-.4%| - My 'per'\n", &i);
    printf("15)|%-.4%| - Orig 'per'\n\n", &i);
	
	ft_printf("16)|%.16%| - My 'per'\n", &i);
    printf("16)|%.16%| - Orig 'per'\n\n", &i);
	
	ft_printf("17)|%.4%| - My 'per'\n", &i);
    printf("17)|%.4%| - Orig 'per'\n\n", &i);

	ft_printf("18)|%030%| - My 'per'\n", &i);
    printf("18)|%030%| - Orig 'per'\n\n", &i);

	ft_printf("19)|%0.30%| - My 'per'\n", &i);
    printf("19)|%0.30%| - Orig 'per'\n\n", &i);

	ft_printf("20)|%13.12%| - My 'per'\n", &i);
    printf("20)|%13.12%| - Orig 'per'\n\n", &i);

	ft_printf("21)|%14.13%| - My 'per'\n", &i);
    printf("21)|%14.13%| - Orig 'per'\n\n", &i);

	ft_printf("22)|%14.14%| - My 'per'\n", &i);
    printf("22)|%14.14%| - Orig 'per'\n\n", &i);

	ft_printf("23)|%14.14 32.23%| - My 'per'\n", &i);
    printf("23)|%14.14 32.23%| - Orig 'per'\n\n", &i);

	ft_printf("24)|%#-0 28.1%| - My 'per'\n", &i);
    printf("24)|%#-0 28.1%| - Orig 'per'\n\n", &i);

	ft_printf("25)|%#-0 28.1%| - My 'per'\n", -1);
    printf("25)|%#-0 28.1%| - Orig 'per'\n\n", -1);

	ft_printf("26)|%#-0z%| - My 'per'\n", -1);
    printf("26)|%#-0z%| - Orig 'per'\n\n", -1);
	
	ft_printf("%4$c %3$d %2$x %1$s","dgreat",12345, 987654321,'Z');

	///////////////////////////////////////////////////////////////////

	ft_printf("test");
	//# 0068 (char *)
	ft_printf("%s%s%s%s%s\n", "this", "is", "a", "multi", "string");
	//printf("%s%s%s%s%s\n", "this", "is", "a", "multi", "string");
	//1. (    9) -->thisisaaa<--
	//2. (   18) -->thisisamultistring<--

	//# 0070 (char *)
	ft_printf("%.2c\n", NULL);
	//printf("%.2c\n", NULL);
	//1. (    0) --><--
	//2. (    1) -->^@<--

	//# 0075 (char)
	ft_printf("@moulitest: %c\n", 0);
	//printf("@moulitest: %c\n", 0);
	//1. (   12) -->@moulitest: <--
	//2. (   13) -->@moulitest: ^@<--
	
	//# 0076 (c	ft_printf("%2c\n", 0);
	//printf("%2c\n", 0);
	//1. (    1) --> <--
	//2. (    2) --> ^@<--

	//# 0077 (char)
	ft_printf("null %c and text\n", 0);
	//printf("null %c and text\n", 0);
	//1. (   14) -->null  and text<--
	//2. (   15) -->null ^@ and text<--

	//# 0078 (char)
	ft_printf("% c\n", 0);
	//printf("% c\n", 0);
	//1. (    0) --><--
	//2. (    1) -->^@<--

	//# 0091 (int)
	ft_printf("@moulitest: %#.o %#.0o\n", 0, 0);
	//printf("@moulitest: %#.o %#.0o\n", 0, 0);
	//1. (   13) -->@moulitest:  <--
	//2. (   15) -->@moulitest: 0 0<--

	//# 0180 (unsigned long)
	ft_printf("%lu\n", -42);
	//printf("%lu\n", -42);
	//1. (    2) -->74<--
	//2. (   20) -->18446744073709551574<--

	ft_printf("@moulitest: %.o %.0o\n", 0, 0);
	//1. (   15) -->@moulitest: 0 0<--
	//2. (   13) -->@moulitest:  <--

	//# 0090 (int)
	ft_printf("@moulitest: %5.o %5.0o\n", 0, 0);

	//ft_printf("-->%<--\n");
	printf("-->%<--\n");
	ft_printf("{%*d}\n\n", -5, 42);
	printf("{%*d}\n\n", -5, 42);
	ft_printf("%%%\n", "test");
	//16. FAIL ft_printf("%jx", 4294967296);                 -> "100000000"
	//ft_printf("%jx\n", 4294967296);
	//printf("%jx\n\n", 4294967296);
	//17. FAIL ft_printf("%jx", -4294967296);                -> "ffffffff00000000"
	ft_printf("%jx\n", -4294967296);
	printf("%jx\n\n", -4294967296);
	//18. FAIL ft_printf("%jx", -4294967297);                -> "fffffffeffffffff"
	ft_printf("%jx\n", -4294967297);
	printf("%jx\n\n", -4294967297);
	//34. FAIL ft_printf("%jd", 9223372036854775807);        -> "9223372036854775807"
	//ft_printf("%jd\n", 9223372036854775807);
	//printf("%jd\n\n", 9223372036854775807);
	//35. FAIL ft_printf("%jd", -9223372036854775808);       -> "-9223372036854775808"
	//ft_printf("%jd\n", -9223372036854775808);
	//printf("%jd\n\n", -9223372036854775808);
	//36. FAIL ft_printf("%zd", 4294967295);                 -> "4294967295"
	//ft_printf("%zd\n", 4294967295);
	//printf("%zd\n\n", 4294967295);
	//37. FAIL ft_printf("%zd", 4294967296);                 -> "4294967296"
	//ft_printf("%zd\n", 4294967296);
	//printf("%zd\n\n", 4294967296);
	//40. FAIL ft_printf("%ju", 4999999999);                 -> "4999999999"
	//ft_printf("%ju\n", 4999999999);
	//printf("%ju\n\n", 4999999999);
	//41. FAIL ft_printf("%ju", 4294967296);                 -> "4294967296"
	//ft_printf("%ju\n", 4294967296);
	//printf("%ju\n\n", 4294967296);
	//42. FAIL ft_printf("%U", 4294967295);                  -> "4294967295"
	//ft_printf("%U\n", 4294967295);
	//printf("%U\n\n", 4294967295);
	//43. FAIL ft_printf("%hU", 4294967296);                 -> "4294967296"
	//ft_printf("%hU\n", 4294967296);
	//printf("%hU\n\n", 4294967296);
	//44. FAIL ft_printf("%U", 4294967296);                  -> "4294967296"
	//ft_printf("%U\n", 4294967296);
	//printf("%U\n\n", 4294967296);
	//45. FAIL ft_printf("%zhd", 4294967296);                -> "4294967296"
	//ft_printf("%zhhd\n", 4294967296);
	//printf("%zhhd\n\n", 4294967296);
	//46. FAIL ft_printf("%jzd", 9223372036854775807);       -> "9223372036854775807"
	//ft_printf("%jzd\n", 9223372036854775807);
	//printf("%jzd\n\n", 9223372036854775807);
	//47. FAIL ft_printf("%jhd", 9223372036854775807);       -> "9223372036854775807"
	//ft_printf("%jhhd\n", 9223372036854775807);
	//printf("%jhhd\n\n", 9223372036854775807);

	ft_printf("{%010d}\n\n", -42);
	printf("{%010d}\n\n\n", -42);

	ft_printf("1)%#o\n", 0);
	printf("1)%#o\n\n", 0);

	ft_printf("2)%o\n", 0);
	printf("2)%o\n\n", 0);

	ft_printf("3)%#.o\n", 0);
	printf("3)%#.o\n\n", 0);

	ft_printf("4)%.o\n", 0);
	printf("4)%.o\n\n", 0);
	int t;
	t = ft_printf("{%.*d}\n\n", -5, 42);
	printf("(%d)\n", t);
	t = printf("{%.*d}\n\n\n", -5, 42);
	printf("(%d)\n", t);

	ft_printf("|%f|\n", 123.456789123456789);
	printf("|%f|\n", 123.456789123456789);

///////////////////////////////////////////////////////////
	ft_printf("%");
	ft_printf("%5");
	ft_printf("%05");
	ft_printf("%-05");
	ft_printf("%-5");
	ft_printf("%5");
	ft_printf("line begin%%colour_on{r-}works!colour_off{w-}\n\n");
	ft_printf("line begin%%colour_on{g-}works!colour_off{w-}\n\n");
	ft_printf("line begin%%colour_on{y-}works!colour_off{w-}\n\n");
	ft_printf("line begin%%colour_on{b-}works!colour_off{w-}\n\n");
	ft_printf("line begin%%colour_on{m-}works!colour_off{w-}\n\n");
	ft_printf("line begin%%colour_on{c-}works!colour_off{w-}\n\n");
	ft_printf("line begin%%colour_on{r+}works!colour_off{w+}\n\n");
	ft_printf("line begin%%colour_on{g+}works!colour_off{w+}\n\n");
	ft_printf("line begin%%colour_on{y+}works!colour_off{w+}\n\n");
	ft_printf("line begin%%colour_on{b+}works!colour_off{w+}\n\n");
	ft_printf("line begin%%colour_on{m+}works!colour_off{w+}\n\n");
	ft_printf("line begin%%colour_on{c+}works!colour_off{w+}\n\n");
	ft_printf("{%030lld}\n\n", -9223372036854775808);
	printf("{%030lld}\n\n\n", -9223372036854775808);
	ft_printf("{%030lld}\n\n", 9223372036854775807);
	printf("{%030lld}\n\n\n", 9223372036854775807);
	ft_printf("{%05d}\n\n", -42);
	printf("{%05d}\n\n\n", -42);
	ft_printf("1) %x\n", -42);
	printf("1) %x\n", -42);
	ft_printf("2) %hhx\n", -42);
	printf("2) %hhx\n", -42);
	ft_printf("3) %hx\n", -42);
	printf("3) %hx\n", -42);
	ft_printf("4) %lx\n", -42);
	printf("4) %lx\n", -42);
	ft_printf("5) %llx\n", -42);
	printf("5) %llx\n", -42);
	ft_printf("6) %lhx\n", -42);
	printf("6) %lhx\n", -42);
	ft_printf("7) %llhhx\n", -42);
	printf("7) %llhhx\n", -42);
	ft_printf("8) %lllhhx\n", -42);
	printf("8) %lllhhx\n", -42);
	ft_printf("9) %lhhhhhhhhx\n", -42);
	printf("9) %lhhhhhhhhx\n", -42);
	ft_printf("|%*%|\n", 10);
	printf("|%*%|\n", 10);
	ft_printf("|%#.3x|\n", 0);
	printf("|%#.3x|\n", 0);
	ft_printf("|%#03x|\n", 0);
	printf("|%#03x|\n", 0);
	ft_printf("|%#8.5x|\n", 0);
	printf("|%#8.5x|\n", 0);
	ft_printf("|%p|\n", NULL);
	printf("|%p|\n", NULL);
	ft_printf("|%037li|\n", 22337203685477l);
	printf("|1234567890123456789012345678901234567890|\n");
	printf("|%037li|\n", 22337203685477l);
	ft_printf("|%037ld|\n", 22337203685477l);
	printf("|1234567890123456789012345678901234567890|\n");
	printf("|%037ld|\n", 22337203685477l);
	ft_printf("|%5c|\n", '\0');
	printf("|%5c|\n", '\0');
	ft_printf("|%-5c|\n", '\0');
	printf("|%-5c|\n", '\0');
	ft_printf("{%.*s}\n", -5, "42");
	printf("{%.*s}\n\n", -5, "42");
	ft_printf("{%.s}\n", "42");
	printf("{%.s}\n\n", "42");
	ft_printf("{%.*s}\n", 5, "42");
	printf("{%.*s}\n\n", 5, "42");
	ft_printf("{%.*d}\n", -5, 42);
	printf("{%.*d}\n", -5, 42);
	double z = 999999.9999999;
	ft_printf("1)  |%f|\n",z);
	printf("1)  |%f|\n\n",z);
	ft_printf("2)  |%.f|\n",z);
	printf("2)  |%.f|\n\n",z);
	ft_printf("3)  |%.f|\n",4.499999999);
	printf("3)  |%.f|\n\n",4.499999999);
	ft_printf("4)  |%+010.f|\n",z);
	printf("4)  |%+010.f|\n\n",z);
	ft_printf("5)  |%0+16.32f|\n",z);
	printf("5)  |%0+16.32f|\n\n",z);
	ft_printf("6)  |%+010.5f|\n", 0.0);
	printf("6)  |%+010.5f|\n\n", 0.0);
	ft_printf("7)  |%-15f|\n",z);
	printf("7)  |%-15f|\n\n",z);
	ft_printf("8)  |%020f|\n",z);
	printf("8)  |%020f|\n\n",z);
	ft_printf("9)  |%+100f|\n",z);
	printf("9)  |%+100f|\n\n",z);
	ft_printf("10) |%f|\n",z);
	printf("10) |%f|\n\n",z);
	ft_printf("11) |%#f|\n",z);
	printf("11) |%#f|\n\n",z);
	ft_printf("12) |%+ f|\n",z);
	printf("12) |%+ f|\n\n",z);
	ft_printf("13) |%f|\n", (double)0xF000000000000000);
	printf("13) |%f|\n\n", (double)0xF000000000000000);
	ft_printf("14) |%f|\n",z);
	printf("14) |%f|\n\n",z);
	ft_printf("15) |%316.0f|\n",z);
	printf("15) |%316.0f|\n\n",z);
	ft_printf("16) |%.10f|\n",z);
	printf("16) |%.10f|\n\n",z);
	ft_printf("17) |%.10.0f|\n",z);
	printf("17) |%.10.0f|\n\n",z);
	ft_printf("18) |%.0f|\n",z);
	printf("18) |%.0f|\n\n",z);
	ft_printf("19) |%#.0f|\n",z);
	printf("19) |%#.0f|\n\n",z);
	///////////////////////////////////////////////
	ft_printf("20) |%f|\n", __DBL_MIN__);
	printf("20) |%f|\n\n", __DBL_MIN__);
	ft_printf("21) |%f|\n",0.000039);
	printf("21) |%f|\n\n",0.000039);
	ft_printf("22) |%f|\n",0.000001);
	printf("22) |%f|\n\n",0.000001);
	ft_printf("23) |%f|\n",__DBL_MAX__);
	printf("23) |%f|\n\n",__DBL_MAX__);
	ft_printf("24) |%f|\n", 1.5);
	printf("24) |%f|\n\n", 1.5);
	ft_printf("25) |%f|\n", -958.125);
	printf("25) |%f|\n\n", -958.125);
	ft_printf("26) |%f|\n", 0.0894255);
	printf("26) |%f|\n\n", 0.0894255);
	ft_printf("27) |%.1f|\n", 1.0);
	printf("27) |%.1f|\n\n", 1.0);
	ft_printf("28) |%.1f|\n", -3.85);
	printf("28) |%.1f|\n\n", -3.85);
	ft_printf("29) |%.3f|\n", 1.5);
	printf("29) |%.3f|\n\n", 1.5);
	ft_printf("30) |%.7f|\n", 1.5);
	printf("30) |%.7f|\n\n", 1.5);
	ft_printf("31) |%.10f|\n", -56.47852012685);
	printf("31) |%.10f|\n\n", -56.47852012685);
	ft_printf("32) |%-5.0f|\n", -7.3);
	printf("32) |%-5.0f|\n\n", -7.3);
	ft_printf("33) |%#-5.6f|\n", -7.3);
	printf("33) |%#-5.6f|\n\n", -7.3);
	ft_printf("34) |% -5.6f|\n", 7.3);
	printf("34) |% -5.6f|\n\n", 7.3);
	ft_printf("35) |%.0f|\n", -__DBL_MAX__);
	printf("35) |%.0f|\n\n", -__DBL_MAX__);
	ft_printf("36) |%#-5.0f|\n", 7.3);
	printf("36) |%#-5.0f|\n\n", 7.3);
	ft_printf("37) |%.10f|\n", 0.0);
	printf("37) |%.10f|\n\n", 0.0);
	ft_printf("38) |%#-5.0f|\n", -7.3);
	printf("38) |%#-5.0f|\n\n", -7.3);
	ft_printf("39) |%#.0f|\n", -7.4);
	printf("39) |%#.0f|\n\n", -7.4);
	ft_printf("40) |%.12f|\n", 1.025978541236587568);
	printf("40) |%.12f|\n\n", 1.025978541236587568);
	ft_printf("41) |%.18f|\n", 0.125978542436587568);
	printf("41) |%.18f|\n\n", 0.125978542436587568);
	ft_printf("42) |%.10f|\n", -0.000000032);
	printf("42) |%.10f|\n\n", -0.000000032);
	ft_printf("%.10f\n", -985.2459765426);
	printf("\n\n***** ***** ***** LONG FUCKING DOUBLE ***** ***** *****\n\n");
	ft_printf("1)  |%Lf|\n", __LDBL_MAX__);
	printf("1)  |%Lf|\n\n", __LDBL_MAX__);
	ft_printf("2)  |%Lf|\n", -__LDBL_MAX__);
	printf("2)  |%Lf|\n\n", -__LDBL_MAX__);
	ft_printf("3)  |%L.17500#f|\n", __LDBL_MIN__);
	printf("3)  |%L.17500#f|\n\n", __LDBL_MIN__);
	ft_printf("4)  |%Lf|\n", -__LDBL_MIN__);
	printf("4)  |%Lf|\n\n", -__LDBL_MIN__);
	ft_printf("5)  |%Lf|\n", __LDBL_EPSILON__);
	printf("5)  |%Lf|\n\n", __LDBL_EPSILON__);
	ft_printf("6)  |%Lf|\n", 1.5l);
	printf("6)  |%Lf|\n\n", 1.5l);
	ft_printf("7)  |%Lf|\n", -3.85l);
	printf("7)  |%Lf|\n\n", -3.85l);
	ft_printf("8)  |%Lf|\n", 573.924l);
	printf("8)  |%Lf|\n\n", 573.924l);
	ft_printf("9)  |%.10Lf|\n", 7.5l);
	printf("9)  |%.10Lf|\n\n", 7.5l);
	ft_printf("10) |%.10Lf|\n", 23.8341375094499l);
	printf("10) |%.10Lf|\n\n", 23.8341375094499l);
	ft_printf("11) %.9f\n", -0.9999999999);
	printf("11) %.9f\n\n", -0.9999999999);
	ft_printf(" %d \n", ft_printf("%llllf", 42.5));
	printf(" %d \n", printf("%llllf", 42.5));
	ft_printf("%4$d %3$d %2$d %1$d\n", 4, 3, 2, 1);
	ft_printf("%.20f\n", 1.025978542436587568678);
	printf("%.20f\n", 1.025978542436587568678);
	ft_printf("|%Lf|\n", (long double)(-5.0/0.0));
	printf("|%Lf|\n", (long double)(-5.0/0.0));
	ft_printf("|%+Lf|\n", (long double)(5.0/0.0));
	printf("|%+Lf|\n", (long double)(5.0/0.0));
	ft_printf("|% Lf|\n", (long double)(5.0/0.0));
	printf("|% Lf|\n", (long double)(5.0/0.0));
	ft_printf("|%Lf|\n", (long double)(5.0/0.0));
	printf("|%Lf|\n", (long double)(5.0/0.0));
	ft_printf("|%Lf|\n", (long double)(0./0.));
	printf("|%Lf|\n", (long double)(0./0.));
	//printf("%3$s\n", 0.0, "abcdef");
	return (0);
}*/
