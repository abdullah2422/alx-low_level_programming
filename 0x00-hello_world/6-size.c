#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	printf("int size: \1d\n", sizeof(int));
	printf("char size: \1d\n", sizeof(char));
	printf("long size: \1d\n", sizeof(long));
	printf("float size: \1d\n", sizeof(float));
	printf("double size: \d\n", sizeof(double));
	return (0);
}
