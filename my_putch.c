#include "main.h"
/**
 * putch - write a single character
 * @c: character to be written
 * Return: 1
 */
int	putch(char	c)
{
	return	(write(1,	&c,	1));
}
