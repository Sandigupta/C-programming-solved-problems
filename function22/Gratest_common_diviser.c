// #include<stdio.h>
// int gcd(int ,int);
// int main(){
//     int a;
//     printf("Enter the first number a: ");
//     scanf("%d",&a);
//     int b;
//     printf("Enter the second number b: ");
//     scanf("%d",&b);
//      int hcf=gcd(a,b);
// }
// int gcd(int x,int y)
//    {
//      if(x>=y)
//      {
//          x%y==0;
//          printf("greatest common diveser=%d",y);
//      }
//          else 
//            {
//                 if(y>=x)
//                 {
//                 y%x==0;
//                 printf("greatest common diveser=%d",x);
//                 }
//                 else if(x%y!=0||y%x!=0)
//                 printf("greatest common diveser =%d",1);
//             }
//     return 0;
//     }
#include<stdio.h>
int gcd(int, int);
int min(int,int);
int main()
{
    int a;
    printf("Enter your first number: ");
    scanf("%d",&a);
    int b;
    printf("Enter the second number");
    scanf("%d",&b);
    int hcf=gcd(a,b);
    printf("hcf=%d",hcf);
}
int gcd(int x,int y)
{
    int hcf;
    for(int i=1;i<=min(x,y);i++){/*for(int i=min(x,y);i>=1;i--)*/
         if(y%i==0&&x%i==0){
            hcf=i;
            //break;/*or es kebad break statment use kar lenge*/
         }
    }
     return hcf;
}
int min(int x,int y)
{
    if(x>y) return y;
    else return x;
}