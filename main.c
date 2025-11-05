/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:A program that stores university results for students
*/

#include <stdio.h>

struct student {
char name[50];
char reg_no[20];
int total_marks;
};

int main()
{
    FILE *fptr;
    struct student s;

    fptr = fopen("results.dat", "rb");

    if (fptr == NULL)
    {

        printf("Error opening file.\n");
        return 1;
    }

    printf("Student Examination Results:\n");

    while (fread(&s, sizeof(s), 1, fptr) == 1)
    {
        printf("Name: %s\n", s.name);
        printf("Total Marks: %d\n", s.total_marks);
    }

    fclose(fptr);
    return 0;
}
