#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columbe: ");
    scanf("%d",&m);
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
          printf("%d ",a);
          a=a+2;
          }
          printf("\n");
        }
    
}