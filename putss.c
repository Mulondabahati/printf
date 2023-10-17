#include "main.h"
/**
 * putss - prints steing
 *
 * @c: string
 * Return: number of bytes
 */
int putss(char *c)
{
	int i, count = 0;

	if (c)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			putcha(c[i]);
			count++;
		}
	}
	return (count);
}
