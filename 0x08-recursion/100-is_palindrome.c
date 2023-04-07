#include "main.h"
#include <string.h>
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
int i, j, len;
len = strlen(s);
for (i = 0, j = len - 1; i < j; i++, j--)
{
if (s[i] != s[j])
{
return (0);
}
}
return (1);
}
/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
*/
int main(void)
{
char str1[] = "racecar";
char str2[] = "hello";
char str3[] = "";
_putchar("%d\n", is_palindrome(str1));
_putchar("%d\n", is_palindrome(str2));
_putchar("%d\n", is_palindrome(str3));
return (0);
}
