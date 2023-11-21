#include<stdio.h>
int fibo(int);
int main(){
    int n;
    printf("Enter the place for which fibonacci number you want: ");
    scanf("%d",&n);
    int f=fibo(n);
    printf("%d",f);
}
int fibo(int n){
    if(n==1||n==2) return 1;
    int recArsive;
    recArsive=fibo(n-1)+fibo(n-2);
    return recArsive;
}