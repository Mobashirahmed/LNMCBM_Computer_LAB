/* Program to find the size of data types */

#include<stdio.h>
#include<conio.h>

int main()
{
    // clrscr();

    printf("Size of char:   %d\n", sizeof(char));
    printf("Size of int:    %d\n", sizeof(int));
    printf("Size of long:   %d\n", sizeof(long));
    printf("Size of float:  %d\n", sizeof(float));
    printf("Size of double: %d\n", sizeof(double));

    getch();
    return 0;
}