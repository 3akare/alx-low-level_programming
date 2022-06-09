#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - a function that prints out the hours in a day
 *
 * Return: Always 0 (Success)
 */
  
void jack_bauer(void)
{
       int a, b;
  
       while (b < 6)
       {
            for (a = 0; a < 10; a++)
            {
                 putchar(a);
                 if (a > 10)
                 {
                      a = 0;
                      b++;
                 }
            }
       }
}
