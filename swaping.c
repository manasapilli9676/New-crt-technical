#include<stdio.h>
int main(){
    int a=345663;
    int b=4325563;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("swaping of number is %d\n%d",a , b);
    return 0;
}