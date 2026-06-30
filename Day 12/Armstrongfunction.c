#include <stdio.h>
int isArmstrong(int n)
{
    int original = n, remainder, digits = 0;
    int sum = 0;
    while (original != 0)
    {
        digits++;
        original /= 10;
    }
    original = n;
    while (original != 0)
    {
        remainder = original % 10;
        int power = 1;
        for (int i = 1; i <= digits; i++)
        {
            power *= remainder;
        }
        sum += power;
        original /= 10;
    }
    return (sum == n);
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is Not an Armstrong Number.\n", num);
    return 0;
}