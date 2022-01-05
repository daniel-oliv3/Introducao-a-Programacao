/* Construa um algoritmo que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a
seguir, o novo preço e a classificação: */

#include <stdio.h>
#include <conio.h>
int main(){
	float preco,npreco=0;
	printf("Digite o preco do produto: ");
	scanf("%f", &preco);
	if (preco > 0 && preco < 50){
		npreco = preco + preco * 0.05;
	} else
		if (preco >= 50 && preco < 100){
			npreco = preco + preco * 0.1;
		} else
			if (preco > 100) {
				npreco = preco + preco * 0.15;
			}
	
	if (npreco > 0 && npreco <= 80){
		printf("Novo preco: %.2f",npreco);
		printf("\nClassificacao: Barato");		
	} else
		if (npreco > 80 && npreco <= 120){
			printf("Novo preco: %.2f",npreco);
			printf("\nClassificacao: Normal");
		} else
			if (npreco > 120 && npreco <= 200){
				printf("Novo preco: %.2f",npreco);
				printf("\nClassificacao: Caro");
		} else
			if (npreco > 200){
				printf("Novo preco: %.2f",npreco);
				printf("\nClassificacao: Muito caro");
		}
	getch();
	return 0;
}

