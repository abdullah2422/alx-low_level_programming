#include <stdio.h>
#include "main.h"
/**
 *main - prints the name of the program
 *@argc: number of arguments
 *@argv: array of arguments.
 *Return: Always 0 (Success)
 */
int main(int argc, char argv[0])
{
for (int i = 0; i < argc; i++)
{
putchar(*argv[i]);
putchar('\n');
}
return (0);
}
