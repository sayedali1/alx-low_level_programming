/**
*_memset - function fills the first n bytes 
*@s: memory area 
*@b: constant
*@n: size of array 
*Return: pointer to s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;	
	for (i = 0; i <= n; i ++)
	{
		s[i] = b; 
	}

	return (s); 
}