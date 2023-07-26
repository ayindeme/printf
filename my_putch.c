#include "main.h"
/**
 * my__putch - write a single character
 * @c: character to be written
 * Return: 1
 */
int	my_putch(char	c)
{
	return	(write(1,	&c,	1));
}
