#include <stdio.h>
#define NAME

/**
 * main - prints the name of the file
 *
 * Return: Always 0 (Success)
 */
int ain(void)
{
#ifdef NAME
	printf("%s\n", __FILE__);
#endif
	return (0);
}
