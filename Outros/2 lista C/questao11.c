/* Uma concessionária está parcelando carros em 60x sem juros desde que você pague, no mínimo, 50% do
valor do veículo de entrada e parcele o restante em 60 vezes iguais sem juros. Faça um algoritmo no qual o
usuário informa o valor do carro e o valor que deseja dar de entrada. O programa deve verificar se o valor
da entrada é suficiente para cobrir os 50% do valor do carro e imprimir o valor da parcela a ser paga em
60x */

#include <stdio.h>
#include <conio.h>
int main(){
	float valor_carro, entrada, parcelas = 0;
	printf("Valor do carro: ");
	scanf("%f", &valor_carro);
	printf("Valor da entrada: ");
	scanf("%f", &entrada);
	if (entrada >= valor_carro * 0.5) {
		parcelas = (valor_carro - entrada) / 60;
		printf("Valor da parcela: 60 parelas de %.2f",parcelas);
	} else
		printf("Valor insuficiente.");
	getch();
	return 0;
}

