#include<stdio.h>
#include<stdlib.h>

/*protoype et signature, qui le rendere unique.yt
it depends on the type and the arguments.*/
void affichage(int a,int b){
	int s;
	
		s=a+b;
	printf("%d",s);
}



void main(){
	
	int a;
	int b;
	
	 printf("enter something\n");
	 
	 scanf("%d",&a);
	 scanf("%d",&b);
	 	
	affichage(a,b);
	
}
