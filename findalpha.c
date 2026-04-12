#include<stdio.h>
#include<ctype.h>
int main(){
    char examp[]="narmadha143";
    int alpha=0,number=0;
    for(int i =0;i<11;i++){
    if(isalpha(examp[i])){
    alpha++;
    }
    else{
        number++;
        
    }

 }
 printf("alphabets%d\n",alpha);
 printf("numbers%d\n",number);
 return 0;
}

