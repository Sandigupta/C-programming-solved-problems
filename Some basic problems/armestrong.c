#include<stdio.h>
int main(){
 int n,di=0;
 int sum=0;
 printf("enter a number");
 scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     di=i%10;
     sum=di*di*di+sum;
     if(sum=i)
     printf("it is an armestrong number");
     i=i/10;
   
    }


}

