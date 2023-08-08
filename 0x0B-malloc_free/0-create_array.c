/**
 * create_array - creates array and initializes it with
 * a specific character
 * @size: size of the arra
 * @c: character to  begin the array with
 * Return: null if size is 0 else return the array
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(size * sizeof(char));
	s[0] = c
	if (s == NULL || size == 0)
		return (0);
	return (s);
}

