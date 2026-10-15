#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    char arr[] = {'A', 'E', 'I', 'O', 'U'};
    // clrscr();

    printf("%c\n", arr[3]);
    for(i=0; i<5; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\nSize of Array is %d bytes", sizeof(arr));

    getch();
    return 0;
}