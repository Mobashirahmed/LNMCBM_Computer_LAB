#include<stdio.h>
#include<conio.h>

int main()
{
    char grade;
    // clrscr();

    printf("Enter your grade [O, A, B, C, F]\n");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'O':
            printf("Outstanding");
            break;
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Fair");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid Grade");
            break;
    }
    printf("\nRun Succesful");

    getch();
    return 0;
}