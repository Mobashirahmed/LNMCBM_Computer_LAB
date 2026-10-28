#include<stdio.h>
#include<conio.h>

int main()
{
    int num, remainder, reverse = 0;
    // clrscr();

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    printf("\nIt's reverse is %d", reverse);

    getch();
    return 0;
}