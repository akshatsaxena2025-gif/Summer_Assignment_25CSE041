#include<stdio.h>
int main()
{
    int rows;
    printf("enter number of rows");
    scanf("%d", &rows);
    int columns;
    printf("enter number of columns");
    scanf("%d",&columns);
    for(int i=1;i<=rows;i++){
    for(int j=1;j<=columns;j++){     
    if(i==1 || i==rows || j==1 || j==columns) 
    printf("* ");
    
   else printf("  ");
    }
    printf("\n");
}
    return 0;
}