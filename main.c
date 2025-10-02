/*
Name:Mark Ian Murithi
Reg No:CT101/G/26541/25
Description:Program that validates Exam eligibility of students
*/

#include <stdio.h>
int main(){
    float attendance, marks;

    printf("Enter students attendance: ");
    scanf("%f", &attendance);

    printf("Enter average mark scored: ");
    scanf("%f", &marks);

    if (attendance >= 75 && marks >= 40){
           printf("Student Is Eligible.\n");
    }else{
        printf("Student is not eligible.\n");
    }
    return 0;
}
