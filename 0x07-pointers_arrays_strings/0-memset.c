#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A pointer to the memory area to be filled
 * @c: The character to fill the memory area with
 * @n: The number of bytes
 * description _memset: over there
 *
 * Return: A pointer to the filled memory area @s
 *
 */
void *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
