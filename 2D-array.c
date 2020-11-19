/* 2D-Array in C Programming Tutorial in Hindi - */

#include <stdio.h>

int main()
{
    int marks[2][4] = {
        {10,20,30,40},
        {50,60,70,80}
    };

    for (int i=0; i<=1; i++)
    {
        for (int j=0; j<=3; j++)
        {
            printf("%d ", marks[i][j]);
        }

        printf("\n");        
    }    
    
    return 0;
}


