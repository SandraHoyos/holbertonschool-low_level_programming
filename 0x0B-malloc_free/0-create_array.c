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
<<<<<<< HEAD
  
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
 int main(void)
 {
   char *buffer;

   buffer = create_array(98, 'H');
   if  (buffer == NULL)
     {
       printf("failed to allocate memory\n");
       return (1);
     }
   simple_print_buffer(buffer, 98);
   free(buffer);
   return (0);
 }int main(void)
 {
   char *buffer;

   buffer = create_array(98, 'H');
   if  (buffer == NULL)
     {
       printf("failed to allocate memory\n");
       return (1);
     }
   simple_print_buffer(buffer, 98);
   free(buffer);
   return (0);
 }
=======
char *s;
unsigned int a;

if (size == 0)
return (NULL);
s = malloc(size * sizeof(*s));
if (s == NULL)
return (NULL);
for (a = 0; a < size; a++)
{
s[a] = c;
}
return (s);
}
>>>>>>> 81d8a8d9804a8ad6ae12f0951ce0c83b600d19b9
