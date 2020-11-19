/* Switch statement C Programming Tutorial in Hindi - */
/* syntax
switch (variable or an integer expression)
{
     case constant:
     //C Statements
     ;
     case constant:
     //C Statements
     ;
     default:
     //C Statements
     ;
}*/

#include <stdio.h>

int main()
{
    /*int i=2;
     switch (8)
     {
        case 1:
           printf("Case1 ");
           break;
        case 2:
           printf("Case2 ");
           break;
        case 3:
           printf("Case3 ");
           break;
        case 4:
           printf("Case4 ");
           break;
        default:
           printf("Default ");
     }*/
    
    char ch='e';
     switch (ch)
     {
         case 'd':
            printf("CaseD ");
            break;
         case 'b':
            printf("CaseB");
            break;
         case 'c':
            printf("CaseC");
            break;
         case 'z':
            printf("CaseZ ");
            break;
         default:
            printf("Default ");
    }
    return 0;
}
