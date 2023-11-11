#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m;
    printf("Enter number of columbe: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(j==3||i==n/2+1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }

}