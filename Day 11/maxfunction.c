#include <stdio.h>
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Maximum = %d\n", maximum(num1, num2));
    return 0;
}