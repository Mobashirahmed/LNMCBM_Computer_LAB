#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    char name[10];
    // clrscr();

    printf("Enter your name: ");
    scanf("%s", &name);

    for(i=0; i<5; i++)
    {
        printf("%s\n", name);
    }

    getch();
    return 0;
}