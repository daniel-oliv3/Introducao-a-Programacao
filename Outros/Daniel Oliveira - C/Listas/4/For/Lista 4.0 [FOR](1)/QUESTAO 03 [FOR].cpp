#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int i;
	
	printf("\n Os Ultimos Ser�o os Primeiros...\n\n");
	for(i=1;i<=100;i++){
		if(i%5!=0){
			printf("S�o esees %d\n",i);
		}
	}
	
	getch();
	return(0);
}
