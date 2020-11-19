/* If statements Programming Tutorial in Hindi - */

/*
Syntax
if (condition)
{
     //Block of C statements here
     //These statements will only execute if the condition is true
}*/

#include <stdio.h>

int main()
{   
    int x = 25;
    int y = 22;

    if (x<y)
    {
        printf("Variable x is less than y \n");
    }
    
    printf("Statement outside the if block");
    
    return 0;
}