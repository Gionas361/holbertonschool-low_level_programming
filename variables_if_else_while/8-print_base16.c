/*
 * File: 8-print_base16.c
 * Auth: Giovanni Y. Carmona <6838@holbertonstudents.com>
 */

#include <stdio.h>
/**
 * main - idk what im DOING!!!!!
 * Return: will wake the value of void = 0
 */
int main(void)
{
char ch;
char CH;

for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(ch);
}
for (CH = 'a' ; CH <= 'f' ; CH++)
{
putchar(CH);
}
putchar('\n');

return (0);
}