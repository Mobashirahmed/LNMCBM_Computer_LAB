#include<stdio.h>
#include<conio.h>

int main()
{
    char arr[5];
    int i;
    // clrscr();

    printf("Enter five characters\n");
    for(i=0; i<5; i++)
    {
        scanf(" %c", &arr[i]);
    }

    printf("Your characters: ");
    for(i=0; i<5; i++)
    {
        printf("%c ", arr[i]);
    }

    getch();
    return 0;
}