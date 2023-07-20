#include "main.h"

/**
 * flip_bits - Function Counts Number Of Bits To Change
 * To Get From One Number To Another
 * @n: First Number
 * @m: Second Number
 * Return: Nnumber Bits Change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ind, cou = 0;
	unsigned long int cur;
	unsigned long int excl = n ^ m;

	for (ind = 63; ind >= 0; ind--)
	{
		cur = excl >> ind;
		if (cur & 1)
			cou++;
	}

	return (cou);
}
