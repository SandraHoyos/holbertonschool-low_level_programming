#include "main.h"
/**
 *binary_to_uint - function that converts a binary number
 *@b: pointer
 *Return: j
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int j = 0;
int i = 0;
int convert = 1;

if (b == NULL)
return (0);

while (b[i + 1])
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
i++;
}
while (i >= 0)
{
j = j + ((b[i] - '0') * convert);
unsigned int j = 0;
int i = 0;
int convert = 1;
if (b == NULL)
return (0);
while (b[i + 1])
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
i++;
}
while (i >= 0)
{
j = j + ((b[i] - '0') * convert);
convert = convert * 2;
i--;
}
return (j);
