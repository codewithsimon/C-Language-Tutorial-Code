/* Pointers in C Programming Tutorial in Hindi - */

#include <stdio.h>
int main()
{
   int num = 10;

   int *p;

   p = &num;

   *p = 100;

   printf("Address of Variable num is: %p \n", p);
   printf("Value of Variable num is: %d", num);

   return 0;
}