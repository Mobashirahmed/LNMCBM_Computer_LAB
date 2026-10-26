#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5] = {10, 15, 20, 25, 30};
    int i, sum = 0;
    // clrscr();

    for(i=0; i<5; i++)
    {
        sum += arr[i];
    }
    printf("Sum of array elements: %d", sum);

    getch();
    return 0;
}