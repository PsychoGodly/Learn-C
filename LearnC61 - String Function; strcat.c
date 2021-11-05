#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
	char name[100]="Houssam";
	char nickname[100]="Elouafi";
	char fullname[100]=" ";

	printf("name = %s\n",name);
	printf("nickname = %s\n",nickname);
	
		
	printf("fullname = %s\n",fullname);
	
	
	
	strcat(fullname,name);
	
	printf("avant %s\n",fullname);
	
	strcat(fullname," ");
	
	printf("entre %s\n",fullname);	
	
	strcat(fullname,nickname);
	
	printf("apres %s\n",fullname);
	
	
	
}
