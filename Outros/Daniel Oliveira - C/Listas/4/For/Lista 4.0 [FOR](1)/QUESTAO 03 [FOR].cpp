#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){

	int i;
	
	printf("\n Os Ultimos Serão os Primeiros...\n\n");
	for(i=1;i<=100;i++){
		if(i%5!=0){
			printf("São esees %d\n",i);
		}
	}
	
	getch();
	return(0);
}
