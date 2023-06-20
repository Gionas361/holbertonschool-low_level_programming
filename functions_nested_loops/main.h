#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


int print_alphabet_x10();

int print_alphabet_x10(void)
{
    char nTimes;

    for (nTimes = '0' ; nTimes < '9' ; nTimes++)
    {
	    char ch;

    	for (ch = 'a' ; ch <= 'z' ; ch++)
	    {
	    	_putchar(ch);
	    }
	    _putchar('\n');
    }

	return (0);
}
