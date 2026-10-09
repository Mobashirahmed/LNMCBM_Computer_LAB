/* WAP to check whether the given year is leap year or not */

#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    // clrscr();

    printf("Enter the year: ");
    scanf("%d", &year);

    if(year % 400 == 0)
    {
        printf("\n%d is a leap year", year);
    }
    else
    {
        if(year % 4 == 0)
        {
            if(year % 100 == 0)
            {
                printf("\n%d ia not a leap year", year);
            }
            else
            {
                printf("\n%d is a leap year", year);
            }
        }
        else
        {
            printf("\n%d is not a leap year", year);
        }
    }
    
    getch();
    return 0;
}