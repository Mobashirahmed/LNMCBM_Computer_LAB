#include<stdio.h>
#include<conio.h>

int main()
{
    int i, j;
    int matrix1[3][2] = { {24, 13}, {45, 56}, {64, 76} };
    int matrix2[2][3];
    // clrscr();

    printf("MATRIX:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }
    // Computing the Transpose
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            matrix2[i][j] = matrix1[j][i];
        }
    }
    printf("TRANSPOSE:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    getch();
    return 0;
}