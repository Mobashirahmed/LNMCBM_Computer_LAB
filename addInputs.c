/* Program to add two numbers entered by the user */
#include<stdio.h>
#include<conio.h>

int main()
{
    // clrscr();
    int a, b;
    printf("Enter two numbers to add\n");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", a+b);
    getch();
    return 0;
}