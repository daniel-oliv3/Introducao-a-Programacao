#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int cond=1,num,cont=0,cont1=0,cont2=0,acum=0,acum1=0;
	float media=0,media1=0;
	
	do{
		printf("Digite um n�mero");
		scanf("%d",&num);
		
		if(num>0){
			cont++;
			
			if(num%2==0){
				cont1++;
				acum1=acum1+num;
				media1=acum1/cont1;
			}
			if(num%2!=0){
				cont2++;
			}
			acum=acum+num;
			media=acum/cont;
			}
	}while(num!=0);
	printf("O total de n�meros pares s�o %d\n",cont1);
	printf("O total de n�meros impares s�o %d\n",cont2);
	printf("A media total � %.2f\n",media);
	printf("A media total dos pares � %.2f\n",media1);
}
