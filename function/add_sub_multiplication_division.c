#include<stdio.h>
void sum(void);
void sub(void);
void mult(void);
void divd(void);
void main(){
    sum();
    sub();
    mult();
    divd();
}
void sum(){
    int a;
    int b;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    printf("sum=%d",a+b);
}
void sub(){
    int a;
    int b;
    printf("\nEnter the two number");
    scanf("%d%d",&a,&b);
    if(a>b)
    printf("sub=%d",a-b);
    else
    printf("sub=%d",b-a);
}
void mult(){
    int a;
    int b;
    printf("\nEnter the two number");
    scanf("%d%d",&a,&b);
    printf("mult=%d",a*b);
}
void divd(){
    float a;
    float b;
    printf("\nEnter the two number");
    scanf("%f%f",&a,&b);
    printf("divd=%f",a/b);
}