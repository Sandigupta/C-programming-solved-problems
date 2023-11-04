#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row and columbe: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int l=1;l<=n-i;l++){
            printf(" ");
        }
       // int b=64;
        for(int j=1;j<=i;j++){
            int d=64+j;
            char ch=(char)d;
            printf("%c",ch);
          //  b++;

        }
        int a=64;
        for(int k=1;k<=i-1;k++){
            int e=a+i-1;
            char ch=(char)e;
            printf("%c",ch);
            a--;
        }
        printf("\n");
    }
     
}