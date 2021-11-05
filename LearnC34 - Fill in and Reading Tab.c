#include<stdlib.h>
#include<stdio.h>
void main(){
	//exercice: remplissage des tableaux et l'affichage du contenue
	
	//declaration
	int tab[5];
	int i;
	//logic
	
		for(i=0;i<5;i++){
			printf("enter a vlue for tab[%d]\n",i);
			scanf("%d",&tab[i]);
			
		}
		
		for(i=0;i<5;i++){
			printf("tab[%d]=%d\n",i,tab[i]);
		}	
}
