#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
	setlocale(LC_ALL,"ptb");
	
	int cont=0;
	float ch=0,ju=0;
	ch=1.50;
	ju=1.10;
	do{
		
		ch+=0.02;
		ju+=0.03;
		cont++;
		printf("%.2f %.2f\n",ju,ch);
	}while(ju<=ch);
	
	printf("Juca vai ficar maior que chico em %d anos",cont);

}
