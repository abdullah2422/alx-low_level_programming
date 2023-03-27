#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer to an int parameter
 * 		and updates the value it points to 98
 * &n; int parameter
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
