#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    int sum=0;
    int ld=0;
    while (n!=0)
    {
        ld=n%10;
        if(ld%2==0)
        {
            sum=sum+ld;
            printf("%ld\n",sum);
        }
          n=n/10;
    }
    
}