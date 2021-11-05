#include<stdlib.h>
#include<stdio.h>
void main(){
	//exercice: remplissage des tableaux et l'affichage du contenue et le maxmimum
	
	//declaration
	int tab[5];
	int i,max;
	//logic
	
		for(i=0;i<5;i++){
			printf("enter a vlue for tab[%d]\n",i);
			scanf("%d",&tab[i]);
			
		}
		
		for(i=0;i<5;i++){
			printf("tab[%d]=%d\n",i,tab[i]);
		}	
		max = tab[0];
		for(i=0;i<5;i++){
			printf("enter a vlue for tab[%d]\n",i);
			if(tab[i]>max){
				max=tab[i];
			}
 		}
 		printf("the maximum is: %d",max);
}	

				
