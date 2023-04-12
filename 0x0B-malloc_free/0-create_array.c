#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
if (size == 0)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
return (arr);
}
}
