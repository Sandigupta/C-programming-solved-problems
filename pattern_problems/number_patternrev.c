#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of row: ");
    scanf("%d",&n);
    int m;
    printf("enter number of columb");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n+1-i;j++)
        { 
         printf(" %d ",j);
        }
        printf("\n");
    }
    
}