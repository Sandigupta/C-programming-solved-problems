#include<stdio.h>
void preInpost(int );
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    preInpost(n);
}
void preInpost(int n){
    if (n==0) return;
    printf("%d ",n);
    preInpost(n-1);
    printf("%d ",n);
    preInpost(n-1);
    printf("%d ",n);
    return;

}