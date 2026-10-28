/* Program to print the pattern
           *
         * * *
       * * * * * 
     * * * * * * * 
   * * * * * * * * *
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j, k;
    // clrscr();

    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5-i; j++)
        {
            printf("  ");
        }
        for(k=1; k<=2*i-1; k++)
        {
            printf("* ");
        }
        printf("\n");
    }

    getch();
    return 0;
}