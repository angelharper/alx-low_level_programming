#include "main.h"

/**
 * get_endianness - Function that checks whether a machine is big endian or little
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char*) &x;

	return (*c);
}

