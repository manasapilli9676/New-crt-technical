#include<stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
   int res=fact(n-1);
   return n*res;
}
int main(){
fact(5);
printf("%d",fact(5));
}