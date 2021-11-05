#include<stdio.h>
#include<stdlib.h>
void main(){
int a,b,i;
a=i++;
printf("i=%d et a=%d\n",i,a);
i=0;
b=++i;
printf("i=%d et b=%d\n",i,b);
}
