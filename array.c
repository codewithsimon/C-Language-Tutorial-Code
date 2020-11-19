/* Array in C Programming Tutorial in Hindi - */

#include <stdio.h>

int main()
{
    int arr[5];

    for (int j=0; j<=4; j++)
    {
       printf("Enter number %d \n", j);
       scanf("%d", &arr[j]);
    }
    

    for (int i=0; i<=4; i++)
    {
         printf("%d ", arr[i]);
    }   

    return 0;
}


