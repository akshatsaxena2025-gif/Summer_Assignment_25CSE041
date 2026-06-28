#include <stdio.h>
int main()
{
    int n, t, rem, r = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;   
    while (n > 0)
    {
        rem = n % 10;
        r = r * 10 + rem;
        n = n / 10;
    }
    if (t == r)
        printf("%d is a Palindrome Number.", t);
    else
        printf("%d is not a Palindrome Number.", t);
    return 0;
}