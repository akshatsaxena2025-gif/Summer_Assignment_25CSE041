#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int product = 1;
    while(n>0)
    {   
        int ld = n%10;
        n = n/10;
        product = product*ld;
    }
    printf("Product of digits is %d", product);
    return 0;
}