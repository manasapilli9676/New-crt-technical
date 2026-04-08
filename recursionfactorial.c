#include <stdio.h>
int sumOfN(int num,int end){
    if(num==end){
        return end;
    }
    int res=sumOfN(num+1,end);
    return num*res;
}
int main() {
    
    int res=sumOfN(1,5);
    printf("%d",res);

    return 0;
}