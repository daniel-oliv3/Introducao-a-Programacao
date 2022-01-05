/* Faça um algoritmo que receba dois números e execute as operações listadas a seguir, de acordo com a
   escolha do usuário: */

#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(){
	float peso, altura, imc=0;
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	imc = peso / pow(altura,2);
	if (imc < 18.5){
		printf("Vc esta abaixo do peso ideal.");
	} else
		if (imc >= 18,5 && imc < 24.9){
			printf("Parabens, vc esta em seu peso normal.");
		} else
			if (imc >= 25 && imc < 29.9){
			printf("Vc esta acima do peso.");
			} else
				if (imc >= 30 && imc < 34.9){
					printf("Obesidade grau I.");
				} else
					if (imc >= 35 && imc < 39.9){
						printf("Obesidade grau II.");
					} else
						if (imc > 40){
							printf("Obeside grau III");
						}
	getch();
	return 0;
}

