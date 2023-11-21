// #include<stdio.h>
// int power(int,int);
// int main()
// {
//     int a;
//     printf("Enter the first number:");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the second number: ");
//     scanf("%d",&b);
//     int p=power(a,b);    
//     printf("%d",p);                     
// }
// int power(int a,int b){
//     int p=1;
//     for(int i=1;i<=b;i++){
//          p=p*a;
//     }
//     return p; 
// }


/*Doing it by recursion*/

#include<stdio.h>
int power(int,int);
int main()
{
    int a;
    printf("Enter the first number:");
    scanf("%d",&a);
    int b;
    printf("Enter the second number: ");
    scanf("%d",&b);
    int p=power(a,b);    
    printf("%d",p);                     
}
int power(int a,int b)
{
    if (b==0) return 1;
    return a*power(a,b-1); 
}