/* Faça um algoritmo que receba dois números e execute as operações listadas a seguir, de acordo com a
   escolha do usuário: */

#include <stdio.h>
#include <conio.h>
int main(){
	float n1,n2,media=0;
	int opcao;
	printf("Digite um valor: ");
	scanf("%f",&n1);
	printf("Digite outro valor: ");
	scanf("%f",&n2);
	printf("1 - Media entre os numeros digitados.");
	printf("\n2 - Diferenca do maior pelo menor.");
	printf("\n3 - Produto entre os numeros digitados.");
	printf("\n4 - Divisao do primeiro pelo segundo");
	printf("\nOpcao: ");
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			media = (n1+n2)/2;
			printf("Media: %.2f",media);
			break;
		case 2:
			if (n1 > n2){
				printf("%.0f - %.0f = %.0f", n1,n2,n1-n2);
			} else
				printf("%.0f - %.0f = %.0f", n2,n1,n2-n1);
			break;
		case 3:
			printf("%.0f * %.0f = %.0f", n1,n2,n1*n2);
			break;
		case 4:
			if (n2 != 0){
					printf("%.0f / %.0f = %.2f",n1,n2,n1/n2);
				}
			else
				printf("Divisao invalida!");
 	}
	getch();
	return 0;
}

