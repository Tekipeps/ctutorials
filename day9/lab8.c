#include <stdio.h>

#define SIZE 5;

struct Student
{
    char name[50];
    float marks;
};

int main()
{
    struct Student students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter student name: ");
        scanf("%s", students[i].name);
        printf("Enter student marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("Student 1: %s %f\n", students[0].name, students[0].marks);
}