#include<stdio.h>
int maze(int);
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    // int m;
    // printf("Enter the number of columbe: ");
    // scanf("%d",&m);
    int ways= maze(n);
    printf("Number of ways=%d",ways);
}
int maze(int n)
{
   if(n==1) return 1 ;
   return maze(n-1);
}