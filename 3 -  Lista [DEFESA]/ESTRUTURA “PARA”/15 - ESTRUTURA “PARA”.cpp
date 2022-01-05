#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//15. Escreva um algoritmo que lê um valor n inteiro e positivo e que calcula a seguinte soma:
//S := 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
//O algoritmo deve escrever cada termo gerado e o valor final de S.

int main(){
	setlocale(LC_ALL, "portuguese");
	int n, r;
	float i, soma;
	do{
	system("color 1F");	
	system("cls");
	printf(".....................................................\n");	
	printf(" Programa que ler um valor e calcula a seguinte soma\n");
	printf(" S := 1 + 1/2 + 1/3 + 1/4 + ... + 1/n \n");
	printf(" imprime cada termo gerado e o valor final de S.\n");
	printf(".....................................................\n\n");
	printf("  Digite um número inteiro: ");
	scanf("%d" , &n);
	soma=0;
	for(i=1 ; i<=n ; i++){
		float resultado=1/i;
		printf("\n  Termo: %f" , resultado);
		soma=soma+resultado;
	}
	printf("\n\n  A soma dos termos é: %f\n", soma);
	do{
		printf("\n1- Nova Execução\n");  
		printf("2- Sair\n"); 
		scanf("%d",&r); 
		if(r!=1 && r!=2) 
			printf("  <Número Inválido!>\n\a"); 
	}while(r!=1 && r!=2);
	system("cls");	
	}while(r!=2);
	system("pause");
	return 0;
}
