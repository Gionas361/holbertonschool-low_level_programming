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
int separar = ',';
int n = '\n';

for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(ch);
putchar("%d, " separar);
}
putchar(n);

return (0);
}
