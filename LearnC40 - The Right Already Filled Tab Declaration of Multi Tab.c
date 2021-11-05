#include<stdlib.h>
#include<stdio.h>
void main(){
	//declaration correct avec le romplissage
	int tab[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("tab[%d][%d]=%d\n",i,j,tab[i][j]);
		}
	}
}
