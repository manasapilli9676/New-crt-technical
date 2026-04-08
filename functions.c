//without return type without parameters 
//eithout return type with parameters 
//with return type without parameters
//with return type with' parameters 
#include <stdio.h>

{
   void printNum(int end){
       for(int i=0;i<end+1;i++){
           printf("%d\t",i);
       }
       printf("\n");
   }
 int main()
   {
     printNum(10);
     printNum(20);
     printNum(30);
     printNum(40); 
   }
    return 0;
}