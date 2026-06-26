#include <stdio.h>
#include <math.h>
int main()
{
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (int num = start; num <= end; num++)
    {
        int temp = num, digits = 0;
        int sum = 0, rem;
        while (temp != 0)
        {
            digits++;
            temp = temp / 10;
        }
        temp = num;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + pow(rem, digits);
            temp = temp / 10;
        }
        if (sum == num)
            printf("%d ", num);
    }
    return 0;
}