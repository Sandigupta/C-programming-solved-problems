#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of cilumbe: ");
    scanf("%d",&m);
    
    for(int i=1;i<=n;i++){
        int a=1;
       for(int j=1;j<=m-i;j++){
        printf(" ");
       }
       for(int k=1;k<=(2*i-1);k++){
       printf("* ");
       }
       printf("\n");
}
}
