//Libraries

#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

//Exercice : chain=""
void main(){
	//declaration
	char chain[20];
	int x=0;
	int i;
	//logic
	
	printf("enter something\n");
	scanf("%s",&chain);
	
	for(i=0;i<20;i++){
		if(chain[i]=='a'){
			x=1;
			break;
		}
	//strcmp
		if(x==0){
	
			printf("there's no letter a on this word");
	}
		if(x==1){
	
			printf("there is an a on this word");
		}
		else
			printf("error occured!");
}

}
