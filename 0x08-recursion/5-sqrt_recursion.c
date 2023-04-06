#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
} else if (n == 0 || n == 1)
{
return (n);
}
else
{
int i = 1;
int result = 1;
while (result <= n)
{
i++;
result = i * i;
}
return (_sqrt_recursion(n - (i - 1)) + (i - 1));
}
}
