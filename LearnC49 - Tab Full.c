#include<stdlib.h>
#include<stdio.h>

void main()
{
//exercice: moy,max,min
	//declaration
		float etd_note[4];
		int i;
		float somme;
		float moy;
		float min;
		float max;
	//logic
		//remplissage
		printf("programme est pret!");
			for(i=0;i<4;i++){
				printf("enterez la note pour l'etudiant %d\n",i+1);
				scanf("%f",&etd_note[i]);
			}
	//moyenne
		//la somme
		somme=0;
		for(i=0;i<4;i++){
			somme=somme+etd_note[i];
		}
		//la moyenne
		moy=somme/4;
		printf("la moyenne de la classe est:%f\n",moy);
	//La note minimale
	min=etd_note[1];
		for(i=0;i<4;i++){
			if(etd_note[i]<min){
				min=etd_note[i];
			}
		}
		printf("la note minimale de la classe est: %f\n",min);
	//la note maximale
	max=etd_note[1];
		for(i=0;i<4;i++){
			if(etd_note[i]>max){
				max=etd_note[i];
			}
		}
		printf("la note maximale de la classe est: %f\n",max);
}
