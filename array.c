#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int arr[5] = {60, 65, 70, 75, 80};
    // clrscr();

    printf("%d\n", arr[3]);
    for(i=0; i<5; i++)
    {
        printf("%d ", arr[i]);
    }
    // printf("\nSize of Array is %d bytes", sizeof(arr));

    getch();
    return 0;
}