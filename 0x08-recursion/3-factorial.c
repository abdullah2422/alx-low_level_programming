#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 *
 * Return: factorial of n
 */
int factorial(int n)
{
    if (n < 0) {
        return -1;  // error: factorial of negative numbers is undefined
    } else if (n == 0) {
        return 1;   // base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1);  // recursive case: multiply n by factorial of (n-1)
    }
}
