#include<stdio.h>
int combination(int, int);
int factorial(int);
void printingSpace(void);
void main(){
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
   
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
        //   printingSpace()
        int p=combination(i,j);
        printf("%d ",p);
        int s=combination(i+1,j+1);
        printf(" "); 
        }
        printf("\n");
    }
    
}
// void printingSpace(){
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//             printf(" ");
//         }

// }
// }
int combination(int i,int j ){
      int comb;
      comb=factorial(i)/(factorial(j)*factorial(i-j));
      return comb;
}
int factorial(int a){
    int fact=1;
    for(int k=2;k<=a;k++){
        fact=fact*k;
    }
    return fact;
}

 for(int l=1;l<=n;l++){
        for(int m=1;m<=l;m++)
        {
          
        }
        printf("\n");
    }
/*i am not able to make like this
             1
            1 1
          1  2  1
        1   3  3   1
      1   4   6  4    1
    1   5   10  10  5   1 
*/