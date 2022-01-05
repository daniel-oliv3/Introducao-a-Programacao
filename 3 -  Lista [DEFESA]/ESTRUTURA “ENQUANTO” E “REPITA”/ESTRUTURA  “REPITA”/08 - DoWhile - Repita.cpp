#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//  8. Criar um algoritmo que leia vários números inteiros positivos e identificar o maior, o menor e média de todos os
//números informados. O número 0 (zero) encerra o algoritmo.

int main(){
	setlocale(LC_ALL, "portuguese");
	int cont=0, numero, maior=0, menor=0, soma;
	float media=0;
	system("color 1F");
	printf("............................................\n");
	printf(" Programa que ler vários números e imprime:\n - Maior número\n - Menor número\n - Média dos números digitados\n - O número 0 (zero) encerra o programa\n");
	printf("............................................\n\n");
	do{
	   	printf("  Digite um número: ");
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
	printf("\n  Maior número: %d\n",maior);
	printf("  Menor número: %d\n",menor);
	printf("  Média dos números digitados: %.2f\n",media);
	printf("  ............................\n");
system("pause");
return 0;
}
