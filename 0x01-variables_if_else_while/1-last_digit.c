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
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n % 10;
if (lastDigit > 5)
printf("%d and is greater than 5\n", n);
else if (lastDigit < 6 ,n != 0 )
printf("%d and is less than 6 and not 0\n", n);
else
printf("%d and is 0\n", n);
return (0);
}
