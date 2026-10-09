#include<stdio.h>
#include<conio.h>

int main()
{
    int year = 1900;
    // clrscr();

    while(year <= 2100)
    {
        if(year%400==0)
        {
            printf("%d\n", year);
        }
        else
        {
            if(year%4==0)
            {
                if(year%100!=0)
                {
                    printf("%d\n", year);
                }
            }
        }
        year++;
    }

    getch();
    return 0;
}