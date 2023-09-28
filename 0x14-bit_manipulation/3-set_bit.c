#include "main.h"

/**
 * set_bit - set 1 into a bit
 * @n: the number
 * @index: the index to set on it
 *
 * Return: 1 if all is good and -1 if not.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);
	*n ^= 1 << index;
	return (1);
}

int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}