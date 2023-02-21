#include<stdio.h>
#include "main.h"


/**
 * _islower -> body of program
 *
 * @c: characterr argument
 * a function that checks for lowercase character
 * Return: 0 if true and 1 if false
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);


}
