#include "main"
/**
 * _memcpy -copies memory area.
 * @n: bytes from memory area
 * @src: to memory area
 * @dest: Returns a pointer to dest
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

    i = 0;
    while (i < n)
    {
        if (i % 10)
        {
            _putchar(" ");
        }
        if (!(i % 10) && i)
        {
            _putchar("\n");
        }
        _putchar("0x%02x", buffer[i]);
        i++;
    }
    _putchar("\n");
}




}
