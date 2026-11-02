#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int arr[5];
    // clrscr();

    printf("Enter the elements od array\n");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Reverse array\n");
    for(i=4; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    getch();
    return 0;
}