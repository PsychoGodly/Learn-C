#include<stdio.h>
#include<stdlib.h>
void main(){
int a,b,i;
a=i++;
//a=i i++, si i=0 a=0 et i=1
printf("%d",a);
i=0;
b=++i;
//i++ a=i, si i=0 a=1 et i=1
printf("%d",b);
}
