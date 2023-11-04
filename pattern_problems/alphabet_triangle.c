#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of cilumbe: ");
    scanf("%d",&m);
    int a=1;
    for(int i=1;i<=n;i++){
        int a=1;
       for(int j=1;j<=m-i;j++){
        printf("# ");
       }
       for(int k=1;k<=i;k++){
        int d=a+64;
        char ch=(char)d;
        printf("%c ",ch);
        a++;
       }
       printf("\n");
}
}