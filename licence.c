/* WAP to check the driving eligibility */

#include<stdio.h>
#include<conio.h>

int main()
{
    int age;
    char ch;
    // clrscr();

    printf("Do you have licence (say y or n): ");
    scanf("%c", &ch);

    printf("Enter your age: ");
    scanf("%d", &age);

    // printf("\nDo you have licence (say y or n): ");
    // scanf("%c", &ch);

    if(age >= 18 && ch == 'y')
    {
        printf("\nYou can Drive");
    }
    else
    {
        printf("\nYou cannot Drive");
    }

    getch();
    return 0;
}