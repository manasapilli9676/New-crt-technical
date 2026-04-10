#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i=n;i++){
        for(int j=0;j>=2*n-1;j++){
            if(j>=n-1-i&&j<=n+1+i){
                printf("*");
            }else{
               printf(" "); 
            }
        }
    }
    return 0;
}