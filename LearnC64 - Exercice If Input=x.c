//Libraries

#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

//Exercice : si login=var , congrats!
void main(){
//Declaration

char login[999]="x";
char input[999];
int id;
//Logic

	printf("enter something\n");
	scanf("%s",&input);

	id=strcmp(login,input);
	if(id==0){
		printf("Congrats!\n");
	}
	else
	
		printf("error occured!");
	
}
