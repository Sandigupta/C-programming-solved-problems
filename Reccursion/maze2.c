#include<stdio.h>
int maze2(int,int);
int main(){
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of colubbe: ");
    scanf("%d",&m);
 int ways=maze2(n,m);
}
int maze(int n,int m){
    int rightways=0;
    int downways=0;
    if(n==1||m==1) return 1;
    if(n==1){//cannot go down
       rightways=rightways+maze2(n,m-1);
    }
    if(m==1){//cannot go right
      downways=downways+maze2(n-1,m);
    }
    if(n>1 && m>1){
        rightways=rightways+maze2(n,m-1);
        downways=downways+maze2(n-1,m);
    }
    int totalways=rightways+downways;
    return totalways;
}