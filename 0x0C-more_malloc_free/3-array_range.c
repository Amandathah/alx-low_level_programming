#include "main.h"
#include <stdlib.h>

/**
 * array_range - ...
 * @min: ...
 * @max: ...
 *
 * Return: integer values
 */
int *array_range(int min, int max)
{	int *a, i = 0;

	if (min > max)
		return (NULL);
	a = malloc((sizeof(int) * (min - max)) + sizeof(int));

	if (a == NULL)
		return (NULL);
	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
