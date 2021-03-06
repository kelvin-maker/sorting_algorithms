#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: The array to sort
 * @size: The size of the array
 *
 *
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, small;
int exch;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
small = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[small])
small = j;
}
if (i != small)
{
exch = array[i];
array[i] = array[small];
array[small] = exch;
print_array(array, size);
}
}
}
