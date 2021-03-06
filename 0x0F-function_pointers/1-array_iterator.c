#include <stdio.h>
/**
 * array_iterator - executes a function
 * @array: array
 * @size: size
 *@action: finction
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int n;
if (array == NULL || action == NULL)
return;
for (n = 0; n < size; n++)
action(array[n]);
}
