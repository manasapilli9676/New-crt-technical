#include <stdio.h>

int main() {
    int n=5;
    int arr[5],sum=0;
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(int i=0;i<n;i++)
    printf("%d\n",arr[i]);
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d\n",sum);
    return 0;
}