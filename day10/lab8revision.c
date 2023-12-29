#include <stdio.h>

#define SIZE 5

struct Student
{
    char name[50];
    float marks;
};

int main()
{
    struct Student students[SIZE];

    printf("Enter information of students:\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter %d.name: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter %d.marks: ", i + 1);
        scanf("%f", &students[i].marks);

        puts("");
    }

    puts("***STUDENT INFORMATION***");
    puts("NAME\tMARK");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%s\t%.2f\n", students[i].name, students[i].marks);
    }
}
