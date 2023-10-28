#include "main.h"

/**
 * print_binary - function that prints the binary
 representation of an unsigned long int.
 * @n: The unsigned long int to print in binary.
 */
void print_binary(unsigned long int n)
{
    int size = sizeof(unsigned long int) * 8;
    int flag = 0, i;

    if (n == 0)
    {
        _putchar('0');
        return;
    }

    for (i = size - 1; i >= 0; i--)
    {
        if ((n & (1 << i)) != 0)
        {
            _putchar('1');
            flag = 1;
        }
        else if (flag)
        {
            _putchar('0');
        }
    }
}
