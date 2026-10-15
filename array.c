#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int arr[] = {55, 60, 65, 70, 75, 80, 85, 90, 95, 100};
    // clrscr();

    printf("%d\n", arr[3]);
    for(i=0; i<10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nSize of Array is %d bytes", sizeof(arr));

    getch();
    return 0;
}