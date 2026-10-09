#include<stdio.h>
#include<conio.h>

int main()
{
    int age;
    // clrscr();

    printf("Enter your age\n");
    scanf("%d", &age);

    if(age >= 18)
    {
        printf("You are eligible to vote");
    }
    else
    {
        printf("You are not eligible to vote");
    }

    getch();
    return 0;
}