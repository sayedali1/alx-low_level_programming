/**
*_memcpy - function fills the first n bytes
*@dest: memory area
*@src: another memory area
*@n: size of array
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

