/* Structure in C Programming Tutorial in Hindi - */
#include <stdio.h>

struct StudentData
{
    char *stu_name;
    int stu_id;
    int stu_age;    
};

int main()
{
    struct StudentData student;

    student.stu_name = "Simon";
    student.stu_id = 78;
    student.stu_age = 45;

    printf("Student Name: %s \n", student.stu_name);
    printf("Student Id: %d \n", student.stu_id);
    printf("Student Age: %d", student.stu_age);

    return 0;
}