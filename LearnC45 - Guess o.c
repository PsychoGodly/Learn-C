#include<stdlib.h>
#include<stdio.h>

void main()
{
	//Exercice : check if the user has typed "o"
	char input;
	
		printf("enter o \n");
		scanf("%c",&input);
			if(input=='o' || input=='O'){
				printf("success\n");
			}
			else{
			
				printf("please enter o \n");
			
			}
}
