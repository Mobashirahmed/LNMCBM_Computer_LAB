/* WAP to print the pattern
    * * * * * 
    * * * * 
    * * * 
    * * 
    *         */

#include<stdio.h>
#include<conio.h>

int main()
{
    int row, col;
    // clrscr();

    for(row=1; row<=5; row++)
    {
        for(col=5; col>=row; col--)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}