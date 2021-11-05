#include<stdlib.h>
#include<stdio.h>
void main(){
	// \0 is stop
	char message[10] = "hello!";
	int i=0;
	while(message[i]!='\0'){
		printf("%c \n",message[i]);
		i++;
	}
}

