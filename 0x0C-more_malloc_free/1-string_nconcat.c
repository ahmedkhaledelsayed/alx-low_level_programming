/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer to a string.
 * @s2: pointer to a string.
 * @n: integer for required number of s2.
 *
 * Return: pointer to the concatenated two strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1 = 0, size2 = 0, i, j;
	char *str;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1]; size1++)
	{
	}
	for (size2 = 0; s1[size2]; size2++)
	{
	}
	str = malloc(size1 + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		sout[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';
	return (str);
}
