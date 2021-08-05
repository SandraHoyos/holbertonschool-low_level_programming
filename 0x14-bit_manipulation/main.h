#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  unsigned int n;

  n = binary_to_uint("1");
  printf("%u\n", n);
  n = binary_to_uint("101");
  printf("%u\n", n);
  n = binary_to_uint("1e01");
  printf("%u\n", n);
  n = binary_to_uint("1100010");
  printf("%u\n", n);
  n = binary_to_uint("0000000000000000000110010010");
  printf("%u\n", n);
  return (0);
}

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
