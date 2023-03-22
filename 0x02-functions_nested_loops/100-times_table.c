#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: 0
*/
void printTimesTable(int n) {
    int i, j;
    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            int result = i * j;
            if (result < 10) {
                _putchar(result + '0');
            } else {
                _putchar(result / 10 + '0');
                _putchar(result % 10 + '0');
            }
            _putchar(' ');
        }
        _putchar('\n');
    }
}
