#include <stdio.h>

int main() {
    int n=5;
    int arr[5],v;
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    printf("%d",arr[i]);
    }
    printf("enter the element to search");
    scanf("%d",&v);
    int flag=0;
   // for(int i=0;i<n;i++){
     //   if(v==arr[i]){
       //     printf("element found at index %d",i);
         //    break;
     //   }else{
       //     printf("element is not found");
        //}
       
    //}
    for(int i=0;i<n;i++){
        if(v==arr[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("element is found");
    }else{
        printf("element is not found");
    }
    return 0;
}