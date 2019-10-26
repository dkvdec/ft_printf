/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_cf_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dheredat <dheredat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 14:05:13 by dheredat          #+#    #+#             */
/*   Updated: 2019/10/26 18:23:14 by dheredat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/proto_vlst.h"
#include<limits.h>
#include<math.h>
/*
void print_bytes(void *ptr, int size) 
{
    unsigned char *p = ptr;
    int i;
    for (i=0; i<size; i++) {
        printf("%02hhX ", p[i]);
    }
    printf("\n");
}
*/
/*
void	ft_putnbr_hex(int octet, int rem)
{
	char const *base = "0123456789abcdef";

	if (rem > 1)
		ft_putnbr_hex(octet >> 4, rem - 1);
	write(1, base + (octet % 16), 1);
}

void	sp_putchar(unsigned char const *ptr)
{
	char const c = *ptr;

	if (' ' <= c && c <= '~')
		write(1, ptr, 1);
	else
		write(1, ".", 1);
}

void	print_memory(const void *addr, size_t size)
{
	size_t i;
	size_t a;
	unsigned char const *ptr = addr;

	i = 0;
	while (i < size)
	{
		a = 0;
		while (a < 16 && a + i < size)
		{
			ft_putnbr_hex(*(ptr + i + a), 2);
			if (a % 2)
				write(1, " ", 1);
			a++;
		}
		while (a < 16)
		{
			write(1, "  ", 2);
			if (a % 2)
				write(1, " ", 1);
			a++;
		}
		a = 0;
		while (a < 16 && a + i < size)
		{
			sp_putchar(ptr + a + i);
			a++;
		}
		write(1, "\n", 1);
		i += 16;
	}
}

#include <stdio.h>
#include <stdint.h>
#include <limits.h>
#include <arpa/inet.h>
#include <errno.h>

void print_byte_as_bits(char val) {
  for (int i = 7; 0 <= i; i--) {
    printf("%c", (val & (1 << i)) ? '1' : '0');
  }
}

void print_bits(char * ty, char * val, unsigned char * bytes, size_t num_bytes) {
  printf("(%*s) %*s = [ ", 15, ty, 16, val);
  for (size_t i = 0; i < num_bytes; i++) {
    print_byte_as_bits(bytes[i]);
    printf(" ");
  }
  printf("]\n");
}

#define SHOW(T,V) do { T x = V; print_bits(#T, #V, (unsigned char*) &x, sizeof(x)); } while(0)

int main(int argc, char **argv)
{
	double min = __DBL_MIN__;
	double max = __DBL_MAX__;
	long double lmin = __LDBL_MIN__;
	long double lmax = __LDBL_MAX__;
	void *a = &max;
	void *b = &min;
	void *c = &lmax;
	void *d = &lmin;
	double z = 999999.9999999;
	double aa = *(double*)a;
	double bb = *(double*)b;
	print_memory(&max, sizeof(max));
	
	print_memory(&aa, sizeof(aa));
	print_memory(&aa, 8);
	print_memory(&max, sizeof(max));
	print_memory(&a, 8);
	printf("\n\n\n\n\n");
	print_memory(&min, sizeof(min));
	
	print_memory(&bb, sizeof(bb));
	print_memory(&bb, 8);
	print_memory(&min, sizeof(min));
	print_memory(&b, 8);
	printf("\n\n\n\n\n");


	
	SHOW(double, max);
	SHOW(double, aa);
	SHOW(double, min);
	SHOW(double, bb);
	printf("\nmin %.1022f\n", min);
	//printf("\nbb  %.1022f\n", bb);
	printf("\nmax %0309.0f\n", max);
	//printf("\naa  %0316f\n", aa);
	long double cc = *(long double*)c;
	long double dd = *(long double*)d;
	SHOW(long double, lmax);
	SHOW(long double, cc);
	SHOW(long double, lmin);
	SHOW(long double, dd);


	/*printf("\n%.20000Lf\n", z);
	printf("\n%.20000Lf\n", bb);*/
	/*
	write(1, "qwerty\033[0;31mqwerty\033[0mqwerty\n", 30);
	printf("%d %d %d %d\n", sizeof(double), sizeof(double*), sizeof(long double), sizeof(long double*));*/
/*	
	printf("1)  |%0.1f|\n",z);
	printf("2)  |%.Lf|\n",z);
	printf("3)  |%.f|\n",4.499999999);
	printf("4)  |%+010.f|\n",z);
	printf("5)  |%0+16.32f|\n",z);
	printf("6)  |%+010.f|\n", 0x0);
	printf("7)  |%-100f|\n",z);
	printf("8)  |%0100f|\n",z);
	printf("9)  |%+100f|\n",z);
	printf("10) |%f|\n",z);
	printf("11) |%#f|\n",z);
	printf("12) |%+ f|\n",z);
	printf("13) |%f|\n", (double)0xF000000000000000);
	printf("14) |%f|\n",z);
	printf("15) |%316.0f|\n",z);
	printf("16) |%.10f|\n",z);
	printf("17) |%.10.0f|\n",z);
	printf("18) |%.0f|\n",z);
	printf("19) |%#.0f|\n",z);
	/*
	printf("%1000.1000f\n\n", __FLT_MAX__);
	printf("%1000.1000f\n\n", __FLT_MIN__);
	printf("%1000.1000f\n\n", __FLT_EPSILON__);
	printf("\n\n\n%.16500LF\n", __LDBL_MIN__);
	printf("\n\n\n%.1500f\n", __DBL_MIN__);
	printf("\n\n\n%04940Lf\n\n\n%.16382Lf\n", lmax, lmin);

	return (0);
}*/
