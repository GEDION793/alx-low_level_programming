#include "holberton.h"

/**
*_islower - function checks for lowercase character
*@c: -is the variable used for in the program
*Return: Always 0
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
