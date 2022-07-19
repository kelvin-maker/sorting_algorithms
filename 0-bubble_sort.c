#include "sort.h"

/**
 *bubble_sort-sorts an array of integers using
 *bublbe sort to an ascending order
 *@array: the array that is sorted
 *@size: the size fo an array
 *
 *Return: void
 */

void bubble_sort(int *array, size_t size)
{
size_t i, num, new_num;
int exch;

if (array == NULL || size < 2)
return;

num = size;
while (num > 0)
{
new_num = 0;
for (i = 0; i < num - 1; i++)
{
if (array[i] > array[i + 1])
{
exch = array[i];
array[i] = array[i + 1];
array[i + 1] = exch;
new_num = i + 1;
print_array(array, size);
}
}
num = new_num;
}
}
