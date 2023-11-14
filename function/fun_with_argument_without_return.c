#include<stdio.h>
void sum(int, float);
void main()
{
float x,y; 
printf("enter x an y :");
scanf("%f%f",&x,&y);
sum(x,y);
}
void sum(float a, float b)
{
// float s=0; //s=a+b;
 printf("sum=%f",a+b);
}
// error: conflicting types for 'sum'; have 'void(float,  float)'
//    10 | void sum(float a, float b)
//       |      ^~~
// fun_with_argument_without_return.c:2:6: note: previous declaration of 'sum' with type 'void(int,  float)'
//     2 | void sum(int, float);
//       |      ^~~