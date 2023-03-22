#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
*/
int main(void)
{
    void print_times_table(int n)
	int i ,j;
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
