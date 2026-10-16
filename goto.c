#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    // clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%2==0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }

    even:
        printf("%d is even", num);
        getch();
        return 0;
    odd:
        printf("%d is odd", num);
        getch();
        return 0;
}