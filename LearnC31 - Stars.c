#include<stdlib.h>
#include<stdio.h>
//exercice: afficher carre etoile et triangulaire des etoiles
void main(){
	int lines;
	int start;
	printf("enter how much lines to show\n");
	scanf("%d",&lines);
	for(start=1;start<=lines;start++){
		printf("*");
		for(start=1;start<=lines-1;start++){
			print("*");
			print("");
		}
	}
}
