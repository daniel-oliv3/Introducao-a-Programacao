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
	
	do{
		if(num>0){
			
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
		}else if(num==0){
			printf("Fim de execu��o");
		}
	}while(num!=0);
	
	printf("A media dos n�meros � %.2f\n",media);
	printf("O maior dos n�meros � %d\n",ma);
	printf("A menor dos n�meros � %d",me);

						
						getch();
						

}
