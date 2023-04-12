#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str) {
    if (str == NULL) {
        return NULL;
    }

    char *copy = malloc(strlen(str) + 1);

    if (copy == NULL) {
        return NULL;
    }

    strcpy(copy, str);
    return copy;
}
