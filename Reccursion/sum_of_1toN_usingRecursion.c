/*method 1 it is done by me*/
#include<stdio.h>
int dec(int,int);
int main()
{
    int n;
    printf("Enter number of times you want to print: ");
    scanf("%d",&n);
    int f= dec(0,n);
    printf("%d",f);
    return 0;
}
int dec(int sum,int n)
{
    if(n==0) return sum;
    sum=sum+n;
    dec(sum,n-1);
}




/*method2 it is tought by sir*/
// #include<stdio.h>
// int sum(int);
// int main()
// {
//     int n;
//     printf("Enter the number");
//     scanf("%d",&n);
//     int s=sum(n);
//     printf("%d",s);
// }
// int sum(int n){
//     int sum=0;
//     for(int i=0;i<=n;i++){
//         sum=sum+i;
//     }
//     return sum;
// }





/*method 3 it is tought by sir*/
// #include<stdio.h>
// int sum(int n){
//     if(n==1||n==0) return 1;
//     int recAns=n+sum(n-1);
//     return recAns;
// }
// int main(){
//     int n;
//     printf("Enter a nimber: ");
//     scanf("%d",&n);
//     int fact=sum(n);
//     printf("%d",fact);
//     return 0;
// }