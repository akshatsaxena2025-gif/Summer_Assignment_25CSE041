#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int check=1;
    for(int i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            check=0;
             break;      
        }
    }
      if (check==1)  printf("%d is a prime number", n);
    else printf("%d is not a prime number", n); 
     return 0;
}