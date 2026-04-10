#include<stdio.h>
int main(){
  int  a=6;

  //  a++;
//printf("%d",a);
//++a;
//printf("%d",a);
//--a;
//printf("%d",a);
//a--;
//printf("%d",a);
int b= ++a + a-- + a;
printf("%d",b);
return 0;

}