#include<stdio.h>
int main()
{
    int n,rn=0;
    printf("Enter a number");
    scanf("%d",&n);
    int ld=0;
    while(n!=0)
    {
        ld=n%10;
        rn=rn*10+ld;
         n=n/10;
    }
    printf("%d\n",rn);
}