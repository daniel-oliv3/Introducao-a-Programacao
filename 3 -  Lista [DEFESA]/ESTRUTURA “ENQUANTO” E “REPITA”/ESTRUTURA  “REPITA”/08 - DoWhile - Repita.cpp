#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//  8. Criar um algoritmo que leia v�rios n�meros inteiros positivos e identificar o maior, o menor e m�dia de todos os
//n�meros informados. O n�mero 0 (zero) encerra o algoritmo.

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont=0, numero, maior=0, menor=0, soma;
	float media=0;
	system("color 1F");
	printf("............................................\n");
	printf(" Programa que ler v�rios n�meros e imprime:\n - Maior n�mero\n - Menor n�mero\n - M�dia dos n�meros digitados\n - O n�mero 0 (zero) encerra o programa\n");
	printf("............................................\n\n");
	do{
	   	printf("  Digite um n�mero: ");
		scanf("%d",&numero);
		if(numero>maior){
			maior=numero;
		}else{
			if(numero<menor){
				menor=numero;
			}
		}
		cont++;
		soma=soma+numero;
		media=soma/cont;
	}while(numero>0);
	printf("\n  Maior n�mero: %d\n",maior);
	printf("  Menor n�mero: %d\n",menor);
	printf("  M�dia dos n�meros digitados: %.2f\n",media);
	printf("  ............................\n");
system("pause");
return 0;
}
