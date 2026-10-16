#include<stdio.h>
#include<conio.h>

int main()
{
    int n, i, r, isPrime;
    // clrscr();

    printf("Enter a number: ");
    scanf("%d", &r);
    // printf("List of Prime Numbers between 1 to 100\n");
    printf("List of Prime Numbers between 1 to %d\n", r);

    for(n=1; n<=r; n++)
    {
        isPrime = 1;
        
        if(n<2)
        {
            isPrime = 0;
        }
        else
        {
            for(i=2; i<=n/2; i++)
            {
                if(n%i==0)
                {
                    isPrime = 0;
                }
            }
        }

        if(isPrime)
        {
            printf("%d, ", n);
        }
    }

    getch();
    return 0;
}