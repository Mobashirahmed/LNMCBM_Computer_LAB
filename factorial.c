#include<stdio.h>
#include<conio.h>

int main()
{
    int num, i, fact = 1;
    // clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    printf("\nFactorial of %d is %d", num, fact);

    getch();
    return 0;
}