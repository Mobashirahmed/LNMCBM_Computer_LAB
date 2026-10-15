#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i;
    // clrscr();

    printf("List of Tables from 1 to 10 except 3 and 5");
    for(n=1; n<=10; n++)
    {
        printf("\n");
        for(i=1; i<=10; i++)
        {
            if(n==3 || n==5)
            {
                break;
            }
            printf("%2d * %2d = %3d\n", n, i, n*i);
        }
    }

    getch();
    return 0;
}