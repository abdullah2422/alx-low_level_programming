#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_helper(int n, int i);

/* _sqrt_recursion - compute the natural square root of a number */
int _sqrt_recursion(int n)
{
    if (n < 0) {
        return (-1); /* negative numbers don't have a natural square root */
    }
    return _sqrt_helper(n, 0);
}

/* _sqrt_helper - recursive helper function */
/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_helper(int n, int i)
{
    if (i * i > n) {
        return (-1);
    }
    if (i * i == n) {
        return (i);
    }
    return (_sqrt_helper(n, i + 1));
}
