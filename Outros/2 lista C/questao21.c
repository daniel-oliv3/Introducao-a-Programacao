/* O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem do distribuidor
e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens encontram-se na tabela a seguir.
Faça um algoritmo que receba o custo de fábrica de um carro e mostre o preço ao consumidor. */

#include <stdio.h>
#include <conio.h>
int main(){
	float custo, preco=0,dist=0,imp=0;
	printf("Digite o custo de fabrica: ");
	scanf("%f",&custo);
	if (custo > 0 && custo <= 12000) {
		dist = custo * 0.05;
		preco = custo + dist + imp;
		printf("Custo ao consumidor: %.2f",preco);
	} else
		if (custo > 1200 && custo <= 25000) {
			dist = custo * 0.1;
			imp = custo * 0.15;
			preco = custo + dist + imp;
			printf("Custo ao consumidor: %.2f",preco);
		} else
			if (custo > 25000) {
				dist = custo * 0.15;
				imp = custo * 0.1;
				preco = custo + dist + imp;
				printf("Custo ao consumidor: %.2f",preco);
			}
			
	getch();
	return 0;
}

