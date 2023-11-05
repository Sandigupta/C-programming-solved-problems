#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columbe: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(i==1||i==n||j==1||j==m)
            printf("*");
            else{
               /* if(i==2||i==3&&j==2||j==3)*/
                printf(" ");
               /* else if(j==1||j==4&&i==j)
                printf("*");*/
            }
        }
        printf("\n");
    }
}