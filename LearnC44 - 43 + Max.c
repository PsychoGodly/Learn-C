#include<stdlib.h>
#include<stdio.h>
void main(){
	//exercice: affichage du tableau multi dimension (2D) et la somme et le maximum
	//declaration
	int tab[2][3];
	int i,j,somme,max;
	//logic
	//remplissage
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("enter a value for tab[%d][%d]\n",i,j);
			scanf("%d",&tab[i][j]);
		}
	}
	//affichage
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("enter a value for tab[%d][%d]=%d\n",i,j,tab[i][j]);
	}
	}
	//la somme
	somme=0;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
		somme=somme+tab[i][j];
		}	
	}
	printf("final result=%d\n",somme);
	//maximum
	max=tab[0][0];
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
				if(max<tab[i][j]){
					max=tab[i][j];
	}
		}	
	}
	printf("the maximum tab is: %d",max);
}


