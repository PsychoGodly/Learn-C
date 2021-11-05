#include<stdlib.h>
#include<stdio.h>
void main(){
	//exercice: remplissage des tableaux et l'affichage du contenue et le maximum 
	
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
		printf("now it's the time for the maximum tab" );
		max=0;
		for(i=0;i<5;i++){
				if(tab[i]>tab[i+1] && tab[i]>max){
					max=tab[i];
				else if(tab[i]<tab[i+1] && tab[i+1]>max)
					max=tab[i+1];
				else
					printf("ERROR");
				
				}
		}
		printf("the maximum is %d",max)
}

