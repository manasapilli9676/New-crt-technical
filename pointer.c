#include<stdio.h>//header file
int main(){ //main function
    /*char a='M';
    char *p;
    p=&a;
    printf("the size of the char is %d",sizeof(a)); */
    int a=5;
    int *p; //address
    p=&a;
    printf("the value of a is %d\n",a);
    printf("%d\n",*p);
    printf("the bit of int is %d\n",sizeof(a));
//the bits of int is 4 
//the bits of float is 4
// the bit of char is 1 


}