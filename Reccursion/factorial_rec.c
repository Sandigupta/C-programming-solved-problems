#include<stdio.h>
int factorial(int);
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=factorial(n);
    printf("fact=%d",fact);
}
int factorial(int n){
    // int fact=1;
    // for(int i=1;i<=n;i++){
        
    //     fact=fact*i;
    // }
    // return fact;
    /*by recursion*/
    if(n==1||n==0) return 1;
    int recAns= n*factorial(n-1);
    return recAns;
}