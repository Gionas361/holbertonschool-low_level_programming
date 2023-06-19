/*
 * File: 0-positive_or_negative.c
 * Auth: Giovanni Y. Carmona <6838@holbertonstudents.com>
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - idk what im DOING!!!!!
 * Return: will wake the value of void = 0's
 */
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

/* This is my code */
if( n < 0 ) {
    printf("%d\n is positive", n);
} else( n = 0 ) {
    printf("%d\n is zero", n);
} else( n > 0 ) {
    printf("%d\n is negative", n);
}

