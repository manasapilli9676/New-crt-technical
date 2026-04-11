#include<stdio.h>
int main(){
    int arr[7]={1,3,4,1,4,3,5};
    int new=0;
    for(int i=0;i<7;i++){
        printf("%d",arr[i]);
        new=new^arr[i];
    }
    printf("%d",new);
    return 0;
}