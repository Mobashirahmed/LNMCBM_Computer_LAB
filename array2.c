#include<stdio.h>
#include<conio.h>

int main()
{
    int N;
    int arr[5] = {10, 15, 20, 25, 30};
    // clrscr();

    printf("Enter the index [0-4] of the element you want to access: ");
    scanf("%d", &N);
    printf("%d", arr[N]);

    getch();
    return 0;
}