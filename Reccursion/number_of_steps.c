#include<stdio.h>
int steps(int);
int main()
{
    int n;
    printf("Enter the number of steps of stayer is: ");
    scanf("%d",&n);
    int ways=steps(n);
    printf("%d",ways);
}
int steps(int n)
{
   if(n==1) return 1;
   else if(n==2) return 2;
   return steps(n-1)+steps(n-2);
}