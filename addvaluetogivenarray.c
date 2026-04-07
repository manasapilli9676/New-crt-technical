#include<stdio.h>
int main(){
int n=6,arr[6];
for(int i=0;i<n;i++){
    scanf("%d\n",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
for(int i=0;i<n;i++){
    arr[i]=arr[i]+2;
}
printf("new updated values are");
for(int i=0;i<n;i++){
    printf(" %d\n",arr[i]);
}
}
