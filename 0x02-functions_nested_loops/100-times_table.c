#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: 0
*/
void print_times_table(int n)
{
    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, n, i * n);
    }
}
