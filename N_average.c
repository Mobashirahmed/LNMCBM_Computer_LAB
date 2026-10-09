/* Program to find the average of first n natural numbers */

#include<stdio.h>
#include<conio.h>

int main()
{
    float avg, sum = 0;
    int n, i = 1;
    // clrscr();

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i<=n)
    {
        sum += i;
        i++;
    }

    avg = sum/n;

    printf("\nAverage of first %d natural number is %.3f", n, avg);

    getch();
    return 0;
}