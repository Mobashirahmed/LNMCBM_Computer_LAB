#include<stdio.h>
#include<conio.h>

int main()
{
    int n;
    // clrscr();

    printf("Enter a number\n");
    scanf("%d", &n);

    if(n%5==0)
    {
        if(n%7==0)
        {
            printf("%d is divisible by both", n);
        }
        else
        {
            printf("%d is divisible by 5 only", n);
        }
    }
    else
    {
        if(n%7==0)
        {
            printf("%d is divisible by 7 only", n);
        }
        else
        {
            printf("%d is divisible by neither 5 nor 7");
        }
    }

    getch();
    return 0;
}