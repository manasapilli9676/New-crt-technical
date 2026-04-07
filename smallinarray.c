#include<stdio.h>
int main(){
int n=5,arr[5];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
int min=arr[0];
for(int i=0;i<n;i++){
if(min>arr[i]){
    min=arr[i];
}

}
printf("%d",min);
}