// #include<stdio.h>
// void greating(int);
// int main(){
//     int n;
//     printf("Enter number of times you want to print");
//     scanf("%d",&n);
//     greating(n);
// }
// void greating(int n){
//     for(int i=1;i<=n;i++){
//         printf("Good Morning\n");
//     }
//     return;
// }
/*Doing recursively by using for loop*/
#include<stdio.h>
void greating(int);
int main(){
    int n;
    printf("Enter number of times you want to print: ");
    scanf("%d",&n);
    greating(n);
    return 0;
}
void greating(int n){
    if(n==0) return;
     printf("Good Morning\n");
     greating(n-1);
    return;
}
