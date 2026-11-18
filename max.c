#include<stdio.h>
#include<conio.h>

int main()
{
    int i, max;
    int arr[5];
    // clrscr();

    printf("Enter the five elements of array\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The Greatest element is ");
    max = arr[0];
    for(i=0; i<5; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("%d", max);

    getch();
    return 0;
}