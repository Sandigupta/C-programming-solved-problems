 #include<stdio.h>
void swip(int* ,int*);
int main(){
    int a;
    printf("Enter the first number a: ");
    scanf("%d",&a);
    int b;
    printf("Enter the second number b: ");
    scanf("%d",&b);
    swip(&a,&b);
    }
       // int temp;
    // temp=a;
    // a=b;
    // b=temp;                                                         
    void swip(int*p,int*q ){
    int x=*p;
    int y=*q;
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d\n",x);
    printf("y=%d",y);
    }
/*we can write it in this way also*/
// #include<stdio.h>
// void swap(int x, int* y){
// int temp;
// temp = *x; // temp = 2 ** = *y; // a = 9
// *y = temp; // y = 2 -> b = 2;
// return;
// }
// int main(){
// int a = 2; int b = 9;
// swap (&a, &b);
// printf("The value of a is %d\n",a);
// printf("The value of b is %d",b);
// return 0;
// }