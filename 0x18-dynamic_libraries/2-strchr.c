#include "main.h"
#include <stdio.h>
#include <stddef.h>
/**
 * _strchr -locates a character in a string.
 * @c: in the string s
 * @s: pointer to the first occurrence of the character c
 * Return: *s
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
