#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int i, mul = 1;
    // clrscr();

    for(i=0; i<5; i++)
    {
        mul *= arr[i];
    }

    printf("Product of array elements: %d", mul);

    getch();
    return 0;
}