#include "holberton.h"

/**
*_islower - display 1 is lower char, 0 otherwise
*@c: -is the variable used for in the program
*Return: Always 0.
*/
int _islower(int c)
{
int result;

if(c >= 65 && C <= 90)
{
result = 0;
if (c >= 97 && c <= 122)
{
result = 1;
}

return (result);
}
