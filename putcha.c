#include "main.h"
/**
 * putcha - prints charactor
 * @c: charactor
 * Return: (0)
 */
int putcha(char c)
{
	return (write(1, &c, 1));
}
