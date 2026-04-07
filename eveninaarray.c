#include <stdio.h>

int main() {
    int n=6;
    int arr[6],count1=0,count2=0;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count1++;
        }else{
            count2++;
        }
    }
    printf("number of even numbers %d\n",count1);
    printf("number of odd numbers %d\n",count2);

    return 0;
}