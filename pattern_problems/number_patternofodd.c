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
        for(int j=1;j<=i;j++)
        { 
            if(j%2!=0)
            {
             printf(" %d ",j);
            }
        }
        printf("\n");
    }
    
}