#include <stdio.h>

void print(int num){
    if(num>5){
        return;
}if(num==5){
    printf("%d\t",num);
}
    print(num+1);
}



int main()
{
    print(1);
    
    return 0;
}