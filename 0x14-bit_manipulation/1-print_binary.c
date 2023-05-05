#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int binary[32];

	int i = 0;

	while (n > 0)
	{
		binary[i] = n % 2;
		n /= 2;
		i++;
	}
	printf("Binary of the number is: ");
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
}
