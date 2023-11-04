#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m;
    printf("enter the number of columbe: ");
    scanf("%d",&m);
   
    for(int i=1;i<=n;i++)
    {   
          int a=1;
        for(int j=1;j<=i;j++)
        {
         if(i%3==0||i==1)
         printf(" %d ",j);
         else
         {
          int d=a+64;
          char ch=(char)d;
          printf(" %c ",ch);
          a++;
         }
        }
          printf("\n");
    }
}