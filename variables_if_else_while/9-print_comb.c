/*
 * File: 5-print_numbers.c
 * Auth: Giovanni Y. Carmona <6838@holbertonstudents.com>
 */

#include <stdio.h>
/**
 * main - idk what im DOING!!!!!
 * Return: will wake the value of void = 0
 */
int main(void)
{
int ch;

for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(ch);
if (ch != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
