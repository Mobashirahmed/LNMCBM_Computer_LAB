#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    // Declaring the Array
    int arr[5];
    // clrscr();

    printf("Enter the five elements of array\n");
    // Accepting the Array elements
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Printing the elements of Array\n");
    // Printing the Array elements
    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}