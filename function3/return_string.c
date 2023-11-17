//first type
// #include<stdio.h>
// char* display();
// void main()
// {   
//     char *str;
//     str=display();
//     printf("string is:%s",str);
// }
// char* display( )
// {
//     return "jenney";
// }




//second way of return string.
// #include<stdio.h>
// char* display();
// void main()
// {   
//     char *str;
//     str=display();
//     str[2]='k';//we are try to modifay in the string.
//                //but after running it will does not give any thing ,because the memmory allocated to the return "jenney"-
//                // is -READ_ONLY_TYPE so the will be not going to be any changes in it.
//     printf("string is:%s",str);
// }
// char* display( )
// {
//     return "jenney";
// }





//third way of return string.
// #include<stdio.h>
// char* display();
// void main()
// {   
//     char *str;
//     str=display();
//    str[2]='k'; 
//     printf("string is:%s",str);
// }
// char* display( )
// {   
//     char str[]="jenney";
//     return "jenney";
// }      //output will be string is:jenney
       //But if we want to modify th estring tha it will ont going to give any oputput.ex-line number 37.
  


  /*but if do below thihg means if we decalayeded the memory type of string should be stastic 
  than we can do modification easily*/
  //let see below.




#include<stdio.h>
char* display();
void main()
{   
    char *str;
    str=display();
    str[2]='k'; 
    printf("string is:%s",str);
}
char* display( )
{   
  static char str[]="jenney";/*we are goting the modification because ,here the memmory 
  allocation of string is stastic an we can acces it again .it will not going to vannice after compliting the the funtion dissplay*/
    return str;
} 
//output will be string is:jekney,here we got thwe modification.