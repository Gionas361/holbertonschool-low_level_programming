#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

int reset_to_98(int *n);

int swap_int(int *a, int *b);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);
