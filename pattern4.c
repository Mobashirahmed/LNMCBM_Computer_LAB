/* WAP tp print the pattern
    * * * * * 
      * * * *
        * * *
          * * 
            * */

#include<stdio.h>
#include<conio.h>

int main()
{
    int row, col, space;
    // clrscr();

    for(row=1; row<=5; row++)
    {
        for(space=1; space<row; space++)
        {
            printf("  ");
        }
        for(col=5; col>=row; col--)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}