/* Functions in C Programming Tutorial in Hindi - */
/*
return_type function_name (argument list)
{
    Set of statements – Block of code
}*/

#include <stdio.h>

int addition(int num1, int num2)
{
    int sum;
    sum = num1+num2;

    return sum;
}

int main()
{
    int var1, var2;

    printf("Enter Number 1: ");
    scanf("%d", &var1);
    printf("Enter Number 2: ");
    scanf("%d", &var2);

    int result = addition(var1,var2);

    printf("Sum of two numbers are: %d", result);

    return 0;
}


