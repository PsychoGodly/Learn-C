//exercice: affichage indice pair
#include<stdlib.h>
#include<stdio.h>

void main()
{

	//declaration
		int n;
		int i;
		int tab[5];
	//logic
		//replissage
			for(i=0;i<5;i++){
					printf("entere a value for case number %d\n",i+1);
					scanf("%d",&tab[i]);
			}
		//affichage(2k)	
			for(i=0;i<5;i++){
				printf("i=%d\n",i);
				if(i%2==0){
					printf("tab[%d]=%d\n",i,tab[i]);
				}
			}
}
