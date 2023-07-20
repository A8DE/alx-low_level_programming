#include "main.h"

/**
 * clear_bit - Function Sets Value Of Given Bit To 0
 * @n: Pointer To Number To Change
T* Return: Success 1, Failure -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

