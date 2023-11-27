#include<stdio.h>
void deacriasing(int);
int main(){
    int n;
    printf("Enter number of times you want to print: ");
    scanf("%d",&n);
     deacriasing(n);
    return 0;
}
void  deacriasing(int n){
    if(n==0) return;
     printf("%d\n",n);
      deacriasing(n-1);
    return;
}