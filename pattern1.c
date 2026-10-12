/* Program to print pattern of * in square or in rectangle
    * * * * *       * * * * * * * *    * * * * *
    * * * * *       * * * * * * * *    * * * * * 
    * * * * *   or  * * * * * * * *    * * * * *
    * * * * *       * * * * * * * *    * * * * *
    * * * * *       * * * * * * * *    * * * * * 
                                       * * * * *
                                       * * * * *
                                       * * * * *  */

#include<stdio.h>
#include<conio.h>

int main()
{
    int row, col;
    // clrscr();

    // for(row=1; row<=5; row++)
    for(row=1; row<=8; row++)
    {
        for(col=1; col<=5; col++)
        // for(col=1; col<=8; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}