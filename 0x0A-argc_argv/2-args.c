#include <stdio.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
(void)argv;
printf("%s\n", argv[i]);
}
return (0);
}
