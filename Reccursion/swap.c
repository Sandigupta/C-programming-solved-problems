#include<stdio.h>
void swip(int ,int);
int main(){
    int a;
    printf("Enter the first number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter the second number b: ");
    scanf("%d",&b);
    swip(a,b);
    }
    // int temp;
    // temp=a;
    // a=b;
    // b=temp;
    void swip(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%d\n",a);
    printf("b=%d",b);
    }
