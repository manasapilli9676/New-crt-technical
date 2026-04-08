#include<stdio.h>
void returnapproach(int start,int end){
    if(start>end){
        return;
    }
    if(start%2==0){
        printf("%d",start);
    }
    
    returnapproach(start+1,end);
}
int main(){
    
    returnapproach(0,10);
    return 0;
}