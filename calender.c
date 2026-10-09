#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    // clrscr();

    for(i = 1; i <= 30; i++)
    {
        printf("%2d\t", i);
        if(i==7 || i==14 || i==21 || i==28)
        {
            printf("\n");
        }
    }

    getch();
    return 0;
}