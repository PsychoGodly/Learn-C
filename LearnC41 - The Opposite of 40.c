#include<stdlib.h>
#include<stdio.h>
void main(){
	//declaration uncorrecte avec le remplissage
	int tab[2][3]={{1,2},{3,4}};
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("tab[%d][%d]=%d\n",i,j,tab[i][j]);
		}
	}
}
