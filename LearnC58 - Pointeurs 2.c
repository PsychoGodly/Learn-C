#include<stdio.h>
#include<stdlib.h>

void main(){
	int var=12;
	int* p=&var;
	//normal
	printf("la valeur de la variable :%d\n",var);
	//ladresse
	printf("l'adresse de la variable var :%d\n",&var);
	//pointeur avait la valeur de ladresse de la variable
	printf("la valeur du p, c'est l'adresse du var: %d\n",p);
	//ladresse du pointeur
	printf("l'adresse du pointeur p: %d\n",&p);
	//la valeur de variable qui est pointer par le pointeur	
	printf("la valeur du la variable var: %d\n",*p);


printf("--------------\n---------- \n----------- \n");

	*p=13;
	
	//normal
	printf("la valeur de la variable :%d\n",var);
	//ladresse
	printf("l'adresse de la variable var :%d\n",&var);
	//pointeur avait la valeur de ladresse de la variable
	printf("la valeur du p, c'est l'adresse du var: %d\n",p);
	//ladresse du pointeur
	printf("l'adresse du pointeur p: %d\n",&p);
	//la valeur de variable qui est pointer par le pointeur	
	printf("la valeur du la variable var: %d\n",*p);

			getch();



}
