#include<stdio.h>
#include<stdlib.h>

//exercice :

//fonctions should be in the top and use it after by the name just like i did down there

int somme(int a,int b){
			
			int s;
			
			s=a+b;
			
			return s;
	}

void main(){
	int a;
	int b;
	int x;
	printf("enter a value for two variables\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	x=somme(a,b);
	printf("the final result is: %d",x);
		
	}
