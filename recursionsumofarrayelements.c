//recursionsumofarrayelements
#include<stdio.h>
int fun(int arr[],int idx,int n){
    if(idx==n){
        return 0;
    }
 int sum=sum+arr[idx];
    fun(arr,idx+1,n);
    return sum;
}
int main(){
    int arr={2,3,4,5,6,7};
    int idx=0;
    int n=5;
    fun(arr,idx,n);
    return 0;
}
