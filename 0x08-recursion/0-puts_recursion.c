#include "main.h"
/**
 *_puts_recursion -prints a string, followed by a new line.
 *@s: input
 *Return: Alawys 0 (Success)
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
int main(void)
{
char str[] = "Puts with recursion";
_puts_recursion(str);
return (0);
}
