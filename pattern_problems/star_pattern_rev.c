#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of colume: ");
    scanf("%d",&m);
    for( int i=0;i<=n-1;i++)
    {
        for(int j=1;j<=m-i;j++)
        {
            printf(" * ");
        //printf(" %d ",i);
        }
        printf("\n");
    }
   return 0;
}