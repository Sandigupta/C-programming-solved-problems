 #include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of row: ");
    scanf("%d",&n);
    int m;
    printf("Enter the number of columbe: ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m-i;j++){
            printf("* ");
        }
        for(int k=1;k<=4;k++){
            printf("#");
        }
        printf("\n");
    }
}