#include "main.h"
#include <stdio.h>
/**
 * _strspn -gets the length of a prefix substring.
 * @s: which consist only of bytes from
 * Return: accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
char *p = s;
while (*p != '\0')
{
char *q = accept;
while (*q != '\0')
{
if (*p == *q)
{
i++;
break;
}
q++;
}
if (*q == '\0')
{
return i;
}
p++;
return i;
}
