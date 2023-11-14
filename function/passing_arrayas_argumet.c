#include<stdio.h>
int avg(int [],int);
void main()
{
int marks[5]={10, 20, 30, 40, 50}, size, average; 
size=sizeof(marks)/sizeof(marks[0]);
 average=avg(marks, size);
  printf("average=%d\n", average);
  printf("inside main size of arry is(in bytes):%d",sizeof(marks));
}
int avg(int marks1[], int size)
{
int i, sum=0, average=0;
 for (i=0;i<size;i++)
sum= sum+marks1[i];
average=sum/size;
printf("inside avg fun size of marks1:%d\n",sizeof(marks1));
return average;
}
// warning: 'sizeof' on array function parameter 'marks1' will return size of 'int *' [-Wsizeof-array-argument]
//    17 | printf("inside avg fun size of marks1:%d\n",sizeof(marks1));
//       |                                                   ^
// passing_arrayas_argumet.c:11:13: note: declared here
//    11 | int avg(int marks1[], int size)
//       |         ~~~~^~~~~~~~
// inside avg fun size of marks1:8
// average=30
// inside main size of arry is(in bytes):20