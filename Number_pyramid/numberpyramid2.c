

// #include<stdio.h>
// int main(){
//     int n;
//     printf("ENTER THE NUMBER OF ROW AND COLUMBE");
//     scanf("%d",&n);
//     // int num=3;
//     // int nsp=1;
//     // int num2=5;
//     int num=5;
//     for(int i=1;i<=n;i++){
//         printf("%d",i);
//     }
//     printf("\n");
//     for(int i=1;i<=n;i++){
//     for(int k=1;k<=n/2+1-i;k++){
//         printf("%d",k);
//     }
//     for(int j=1;j<=2*i-1;j++){
//         printf(" ");
//     } 
//       for(int l=1;l<=n/2-i+1;l++){
//     //    if(i==2)
//     //    num=6;
//     //    else if(i==3){
//     //    num=7;}
//        printf("%d",num);
//         num++;
        
//      }
//     printf("\n");
//     }
// }
 #include<stdio.h>
int main(){
int n;
printf("ENTER THE NUMBER OF ROW AND COLUMBE: ");
scanf("%d",&n);
int nst=n;
int nsp=1;
for(int i=1;i<=2*n+1;i++){
    printf("%d",i);
}
printf("\n");
for(int i=1;i<=n;i++) {
int a = 1;
for(int j=1;j<=nst;j++){
    printf("%d",a); // stars printf("%d",a);
    a++;
}
for(int k=1; k<=nsp; k++) { // spaces
printf(" ");
a++;
}
for(int j=1;j<=nst;j++){ // stars
printf("%d", a);
a++;
}
nst--;
nsp+=2;
printf("\n");
}
}