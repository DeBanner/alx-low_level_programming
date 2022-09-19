#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @x: this is the first entry
 * @y: this is the second entry
 *
 *
 */
void swap_int(int *x, int *y)
{
	int changed;

	changed = *x;
	*x = *y;
	*y = changed;
}
