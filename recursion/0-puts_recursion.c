#include "main.h"                                                                               
#include <stdio.h>                                                                              
/**                                                                                             
 * _puts_recursion - Copy a string                                                                      
 *                                                                                              
 * @c: the string provided by the user                                                 
 *                                                                                              
 * Return: gives out the result of calculation.                                                 
 */  

int _puts_recursion(char c)
{
    if (c == '\0')
    {
        return;
    }
    _putchar(c);
    _puts_recursion(c + 1);
}
