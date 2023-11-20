#include<stdio.h>
int factorial(int );
void main()
{
    int r,n;
    printf("Enter the n and r: ");
    scanf("%d%d",&r,&n);
    int fact;
    fact=factorial(n)/(factorial(r)*factorial(n-r));
    printf("%d\n",fact);

}
int factorial(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact=fact*i;
    }
    return fact;
}