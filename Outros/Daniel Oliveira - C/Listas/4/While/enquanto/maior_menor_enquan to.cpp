#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int num=100000,acum=0,cont=0,ma=0,me;
	float media=0;
	
	printf("Digite um valor\n");
	scanf("%d",&num);
	
	while(num>0){
		
		printf("Digite mais um valor\n");
		
		scanf("%d",&num);
		if(num>ma){
			ma=num;
		}else if(num<me){
			me=num;
		}
		acum=acum+num;
		cont++;
		media=acum/cont;
		
	}
	printf("A media dos números é %.2f",media);
	printf("O maior dos números é %d",ma);
	printf("A menor dos números é %d",me);

						
						getch();
						

}
