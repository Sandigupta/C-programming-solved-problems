#include<stdio.h>
void modify(char*,char*);
void main(){
    char str1[]="Jenny";
    char str2[]="Sandeep";
    modify(str1 ,str2);
}
void modify(char* str1,char* str2)
{
    int l=0;
      for(int i=0;str1[i]!='\0';i++){
         l=l+1;
      }
      printf("lenth of str1 is:%d\n",l);
      str2[2]='z';
      printf("str2=%s\n sstr1=%s\n",str1,str2);
}