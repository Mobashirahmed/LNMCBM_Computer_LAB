/* Program to see constants in C */
#include<stdio.h>
#include<conio.h>

void main()
{
    // clrscr();
    int age = 20;
    char grade = 'B';
    const float PI = 3.14;

    printf("Age = %d Grade = %c PI = %.2f", age, grade, PI);
    getch();
}