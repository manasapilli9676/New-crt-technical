#include<stdio.h>
void returnapproach(int start){
    if(start<0){
        return;
    }
    printf("%d",start);
    returnapproach(start-1);
}
int main(){
    returnapproach(10);
    return 0;
}