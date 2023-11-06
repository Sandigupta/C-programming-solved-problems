#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row : ");
    scanf("%d",&n);
    int m;
    printf("Enter number of colume: ");
    scanf("%d",&m);
    for( int i=1;i<=n;i++)
    {
        for(int i=1;i<=m;i++)
        {
         printf(" * ");
        }
        printf("\n");
    }
   return 0;
}