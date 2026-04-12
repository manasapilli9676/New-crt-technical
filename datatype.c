#include<stdio.h>
#include<ctype.h>
int main(){
    char name[]="manasa";
    int new=toupper(name[0]); 
    printf("%c",new);
    return 0;
}