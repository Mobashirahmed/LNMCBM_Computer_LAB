/* Program to see various data types in C */
#include<stdio.h>
#include<conio.h>

int main()
{
    // clrscr();
    int roll = 265074;
    char section = 'B';
    float percentage = 82.64;
    double PI = 3.141592653583;

    printf("Roll no.    :%d\n", roll);
    printf("Section     :%c\n", section);
    printf("Percentage  :%f\n", percentage);
    printf("Value of PI :%lf\n", PI);
    getch();
    return 0;
}