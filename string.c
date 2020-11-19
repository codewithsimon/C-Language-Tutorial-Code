/* String in C Programming Tutorial in Hindi - */

#include <stdio.h>
#include <string.h>

int main()
{
    char first_name[20] = "simon";
    char last_name[10] = "simon";

    if (strcmp(first_name, last_name) == 0)
    {
        printf("string 1 and string 2 are equal");
    }
    else
    {
        printf("string 1 and 2 are different");
    }
    


    //printf("Length of string is: %d", strlen(name));

    /*puts("Whats is your name: ");
    gets(name);
    
    puts(name);*/
    
    /*scanf("%s", name);
    printf("Welcome %s to C Programming", name);*/
}


