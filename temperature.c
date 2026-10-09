#include<stdio.h>
#include<conio.h>

int main()
{
    float F, C, fahrenheit, celsius;
    // clrscr();

    // Fahrenheit to Centigrade
    printf("Enter Fahrenheit: ");
    scanf("%f", &F);
    celsius = (F - 32.0) * 5.0/9.0;
    printf("Centigrade = %.2f\n\n", celsius);
    // Centigrade to Fahrenheit
    printf("Enter Centigrade: ");
    scanf("%f", &C);
    fahrenheit = (C * 9.0/5.0) + 32.0;
    printf("Fahrenheit = %.2f", fahrenheit);

    getch();
    return 0;
}