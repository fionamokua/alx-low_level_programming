#include "main.h"
/**
 * flip_bits -  function that returns the number of bits
 * you would need to flip to get from one number to another.
 *
 * @parm:
 * @n: first number to be compared
 * @m: second number to  be compared
 *
 * Return: the difference between them
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	if (n == 0 && m == 0)
		return (0);

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);
}
