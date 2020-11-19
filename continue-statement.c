// Continue statement in C Programming Tutorial in Hindi

#include <stdio.h>
int main()
{
    int counter=10;
    while (counter >=0)
    {	 
        if (counter == 6)
        {
            counter--;
            continue;
        }
        
        printf("%d  ", counter);
        counter--;
    }
    return 0;
}