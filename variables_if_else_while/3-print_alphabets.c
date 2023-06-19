/*
 * File: 3-print_alphabets.c
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
char n = '\n';

for (ch = 'a' ; ch <= 'z' ; ch++) 
{
putchar(ch);
}
for (CH = 'A' ; CH <= 'Z' ; ch++)
{
putchar(CH);
}
putchar(n);

return (0);
}