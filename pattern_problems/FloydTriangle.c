#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columbe: ");
    scanf("%d",&m);
    /* int sum=0;
        for(int i=1;i<=n;i++){
        int a=1 ;
        for(int j=1;j<=i;j++){
        sum=sum+a;
        printf("%d ",sum); 
        }
        printf("\n");
    }*///this is a kind of method that sir done with,which is niche wala
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }   
}
