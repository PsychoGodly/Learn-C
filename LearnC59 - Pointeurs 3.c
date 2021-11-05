#include<stdio.h>
#include<stdlib.h>

void main(){
	
	//4 jumps for ints
	
	int* tab[2]={45,15};
	
	printf("&tab = %d \n",&tab);
	
	printf("&tab[0] = %d \n",&tab[0]);
	
	printf("&tab[1] = %d \n",&tab[1]);
	
	
	
	printf("--------------\n---------- \n----------- \n");
	
	
	
	printf("&tab[0] = %d \n",&tab[0]);
	
	printf("*tab[0] = %d \n",*tab[0]);
	
	printf("&tab[1] = %d \n",&tab[1]);
	
	printf("*tab[1] = %d \n",*tab[1]);
		
	
}
