#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
*/
int main(void)
{
int n;
int *ptr;
n = 402;
ptr = &n;
_putchar("n=%d\n", n);
*ptr = 98;
_putchar("n=%d\n", n);
return (0);
}
