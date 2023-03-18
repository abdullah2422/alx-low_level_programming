#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0
*/
int main(void)
{
int digit = 0;
while (digit <= 9)
{
/*conver digit to ASCII repersentation*/
putchar(digit, '0');
digit++;
}
putchar("\n");
return (0);
}
