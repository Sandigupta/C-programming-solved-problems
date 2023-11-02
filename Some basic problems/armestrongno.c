#include<stdio.h>
int main(){
 int n,di=0;
 int sum=0;
 printf("enter a number");
 scanf("%d",&n);
 while(n>0)
 { 
   di=n%10;
   sum=di*di*di+sum;
   n=n/10;
 
 }
  printf("%d",sum);
  if(sum=n)
  printf("it is an armestrong number");
}

