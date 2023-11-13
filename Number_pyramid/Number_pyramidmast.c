// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number of row: ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n+1-i;j++){
//            printf("*");
//         }
//         for(int k=1;k<=2*i-3;k++){
//             printf(" ");
//         }
//         int nst=n-1;
//         for(int l=1;l<=nst;l++){
//           printf("*");
//           if(i==1||i==2)
//             nst=n-1;
//             else 
//             nst--;
//             }
//            printf("\n"); 
//         }
//     }   

#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER OF ROW AND COLUMBE");
    scanf("%d",&n);
    int nst=n;
    int nsp=1;
    for(int i=1;i<=2*n+1;i++){
        printf("*");
    }
    printf("\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        for(int l=1;l<=nst;l++){
            printf("*");
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
}