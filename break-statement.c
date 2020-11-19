// Break statement in C Programming Tutorial in Hindi

#include <stdio.h>
int main()
{
     int num =0;

     while(num<=10)
     {
        printf("value of variable num is: %d\n", num);   

        if (num == 2)
        {
            break;
        }        

        num++;
     }

     printf("Out of while-loop");
     return 0;
}