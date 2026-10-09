#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i = 1;
    // clrscr();

    printf("Enter a number: ");
    scanf("%d", &n);

    while(i<=10)
    {
        printf("%2d * %2d = %3d\n", n, i, n*i);
        i++;
    }

    getch();
    return 0;
}