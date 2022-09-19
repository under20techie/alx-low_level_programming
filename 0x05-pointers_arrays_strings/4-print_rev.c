#include "main.h"
#include <stdio.h>

/**
* print_rev - prints the reverse of  a string.
* @s: a pointer to the string array.
*
* Return: Always0 (Success)
*/

void print_rev(char *s)
{
  int r = 0;
  
  while (s[r])
  {
    printf("%d", s[r]);
    r--;
  }
  printf("\n");
}