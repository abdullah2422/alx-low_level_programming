#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char* _strdup(char* str) {
    if (str == NULL) {
        return NULL;
    }

    size_t len = strlen(str) + 1;
    char* copy = (char*)malloc(len * sizeof(char));

    if (copy == NULL) {
        return NULL;
    }

    memcpy(copy, str, len);

    return copy;
}
