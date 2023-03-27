#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int mosalah;
	for (mosalah = 0; *s != '\0'; s++)
		++mosalah;
	return (mosalah);
}
