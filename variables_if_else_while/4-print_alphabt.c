/*
 * File: 4-print_alphabt.c
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
char n = '\n';

for (ch = 'a' ; (ch <= 'z') && (ch != 'e' || 'q'); ch++)
{
putchar(ch);
}
putchar(n);

return (0);
}