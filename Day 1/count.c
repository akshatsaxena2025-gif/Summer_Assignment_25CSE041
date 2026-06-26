#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    int count=0 ;
    while(n>0){
        n=n/10;
        count++;
    }
     printf("Count of Digits is :%d", count);
    return 0;

}