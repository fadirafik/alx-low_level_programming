#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator
 * @array: input of an array
 * @size: size of the array
 * @action: is the function needed to work
 *
 * Return: nothing  
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
    long unsigned int i = 0;

    if (array != NULL)
    {
        while (i < size)
        {
            action(*(array + i));
            i++;
        }
    }
}