#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j;
    int matrix[3][3] = { {12, 34, 42}, {45, 56, 74}, {31, 21, 52} };
    // clrscr();

    printf("MATRIX:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}