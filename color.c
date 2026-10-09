#include<stdio.h>
#include<conio.h>

int main()
{
    int color;
    // clrscr();

    printf("Enter color number [1 to 7]: ");
    scanf("%d", &color);

    switch(color)
    {
        case 1:
            printf("VIOLET");
            break;
        case 2:
            printf("INDIGO");
            break;
        case 3:
            printf("BLUE");
            break;
        case 4:
            printf("GREEN");
            break;
        case 5:
            printf("YELLOW");
            break;
        case 6:
            printf("ORANGE");
            break;
        case 7:
            printf("RED");
            break;
        default:
            printf("Invalid color number");
            break;
    }

    getch();
    return 0;
}