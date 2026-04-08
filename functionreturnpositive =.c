#include<stdio.h>
void positive(int num){
    if(num>=0){
        printf("given number is positive");
    }else{
        printf("given number is negative");
    }
}
int main(){
    positive(2);
}
