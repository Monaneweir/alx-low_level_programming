#include < unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return:on success 1.
 * on error, _ 1 is returned, an errnot is set appropriately.
 */
int _putchar(char c)
{
return (write (1, &c, 1));
}
