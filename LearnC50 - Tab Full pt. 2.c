#include<stdlib.h>
#include<stdio.h>

void main()
{
//exercice: moy,max,min, def par utilisateur
	//declaration
		int n;
		int i;
		float somme;
		float moy;
		float min;
		float max;
	//logic
		//?
		printf("combien des etudiants ?\n");
		scanf("%d",&n);
		float etd_note[n];
		//rempmlissage
		printf("programme est pret!");
			for(i=0;i<n;i++){
				printf("enterez la note pour l'etudiant %d\n",i+1);
				scanf("%f",&etd_note[i]);
			}
	//moyenne
		//la somme
		somme=0;
		for(i=0;i<n;i++){
			somme=somme+etd_note[i];
		}
		//la moyenne
		moy=somme/n;
		printf("la moyenne de la classe est:%f\n",moy);
	//La note minimale
	min=etd_note[1];
		for(i=0;i<n;i++){
			if(etd_note[i]<min){
				min=etd_note[i];
			}
		}
		printf("la note minimale de la classe est: %f\n",min);
	//la note maximale
	max=etd_note[1];
		for(i=0;i<n;i++){
			if(etd_note[i]>max){
				max=etd_note[i];
			}
		}
		printf("la note maximale de la classe est: %f\n",max);
}
