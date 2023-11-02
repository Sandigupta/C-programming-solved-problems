#include<stdio.h>
int main()
    {
        int n ,a=1,b=1,sum=0;
        printf("number of fibonacci number");
        scanf("%d",&n);
        for(int i=1;i<n-1;i++)
        {
        sum=a+b;
        a=b;
        printf("%d  ",sum);
        b=sum;
       
        }
    }
