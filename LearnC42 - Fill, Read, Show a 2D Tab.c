#include<stdlib.h>
#include<stdio.h>
void main(){
	//exercice: affichage du tableau multi dimension (2D)
	//declaration
	int tab[2][3];
	int i,j;
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


}

