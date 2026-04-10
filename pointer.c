#include<stdio.h>
int main(){
    int a=3;   // 'a' is a normal variable that stores the value 3
    int *p;// 'p' is a pointer variable that can store the address of an int
    p=&a;//it is the value stored in that particular location now 'p' stores the address of variable 'a'
    //int *p=&a;  single line declaration 
    printf("int a stores the value of a %d\n",a);
    printf("it stores the address of the variable data type%pn",p);
    printf("p stores the address of the varaible a %d",*p);
}
