#include <stdio.h>

int main()
{
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Prime numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++)
    {
        if (i < 2)
            continue;
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", i);
    }
    return 0;
}