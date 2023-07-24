/**
 * swap_int( - resets a given number to 98
 * @a: is the user input
 * @b: is also the user input
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

