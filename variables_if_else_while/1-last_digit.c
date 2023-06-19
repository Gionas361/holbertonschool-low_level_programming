/*
 * File: 1-last_digit.c
 * Auth: Giovanni Y. Carmona <6838@holbertonstudents.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - idk what im DOING!!!!!
 * Return: will wake the value of void = 0's
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* This is my code */
int idk;
idk = (n % 10);

if (idk > 5)
{
printf("Last digit of %d", n);
printf("is %d", idk);
printf("and is greater than 5\n");
}
else if (idk == 0)
{
printf("Last digit of %d", n);
printf("is %d", idk);
printf("and is 0\n");
}
else if (idk < 6)&&(idk != 0)
{
printf("Last digit of %d", n);
printf("is %d", idk);
printf("and is less than 6 and not 0\n");
}

return (0);
}
