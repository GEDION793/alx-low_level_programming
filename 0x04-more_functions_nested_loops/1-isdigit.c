#include "holberton.h"

/**
*_isdigit - function that checks for a digit
*Return: 1 on true
*@c: parameter
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
return (0);
}
