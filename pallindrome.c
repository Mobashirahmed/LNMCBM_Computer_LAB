#include<stdio.h>
#include<conio.h>

int main()
{
    int num, original, remainder, reverse = 0;
    // clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if(reverse == original)
    {
        printf("\n%d is a pallindrome", original);
    }
    else
    {
        printf("\n%d is not a pallindrome", original);
    }

    getch();
    return 0;
}