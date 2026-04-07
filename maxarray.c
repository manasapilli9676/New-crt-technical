int main(){
int n=5,arr[5];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    printf("%d",arr[i]);
}
int max=arr[0];
for(int i=0;i<n;i++){
if(max<arr[i]){
    max=arr[i];
}

}

printf("the max element in the array is %d\n",max);
}