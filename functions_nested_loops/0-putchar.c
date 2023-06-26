/*
 * File: 0-putchar.c
 * Auth: Giovanni Y. Carmona <6838@holbertonstudents.com>
 */

#include <stdio.h>
/**
 * main - puts will print the text inside of the quotation
 * Return: will wake the value of void = 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}