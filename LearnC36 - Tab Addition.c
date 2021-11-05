#include<stdlib.h>
#include<stdio.h>
void main(){
	//exercice: remplissage des tableaux et l'affichage du contenue et le calcul de n elemet
	
	//declaration
	int tab[5];
	int i,s;
	//logic
	
		for(i=0;i<5;i++){
			printf("enter a vlue for tab[%d]\n",i);
			scanf("%d",&tab[i]);
			
		}
		
		for(i=0;i<5;i++){
			printf("tab[%d]=%d\n",i,tab[i]);
		}	
		
		printf("now it's the time to calculate!\n" );
		s=0;
		for(i=0;i<5;i++){
			s=s+tab[i];
		}
		printf("The value of putting all tabs together is:\n %d",s);
	}
			
