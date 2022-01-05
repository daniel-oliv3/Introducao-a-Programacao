#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int num,cont=0;
	
	do{
		printf("Digite um numero");
		scanf("%d",&num);
		
		if(num>50 && num<200){
			cont++;
		}
	}while(num!=0);
	
	printf("São %d numeros no intervalo",cont);
}
