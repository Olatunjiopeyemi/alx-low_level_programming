#include<stdio.h>
#include "main.h"


/**
 * _islower - body
 *
 * int c - characterr argument
 * a function that checks for lowercase character
 * Return: 0 or 1 
 */

int _islower(int c)
{
	return(c>= 'a' && c <= 'z');
}

