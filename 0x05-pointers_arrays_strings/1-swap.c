#include "main.h"
/**
 * swap_int - function name
 * @a: first parameter
 * @b: first parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
