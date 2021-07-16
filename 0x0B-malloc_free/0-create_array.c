#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create an array of chars
 *@size: size of array
 *@c: character to assing
 *Return: pointer to Array, NULL if value is 0
 */

char *create_array(unsigned int size, char c)
{
  
char *s=NULL;
  
{

if (size == 0)
{
return (NULL);
}
s= malloc(sizeOf(char)*size);

if (!(s))
{
return (NULL);
}
int i = 0;
while(i < size)
{   
*(s +i)=c;
i++;
}

return (s);

}
