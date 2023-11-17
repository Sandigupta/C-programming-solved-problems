#include<stdio.h>
int sum(int, int);
void main()
{
int x,y,c;
printf("enter x any y :");
scanf("%d %d",&x,&y);
c=sum(x,y);
printf("sum=%d",c);
int sum(int a, int b)
{
// float s-0;
//s-a+b;
return a+b;
}
}