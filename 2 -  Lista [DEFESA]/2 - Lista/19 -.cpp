#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 19 -Faça um programa que leia o peso e a altura de uma pessoa,faça o cálculo do IMC (Índice de Massa
//Corporal) e informe se ele está abaixo do peso, no peso ideal, acima do peso ou seu grau de obesidade.
//IMC = peso/altura2
//CÁLCULO

int main()
{
	setlocale(LC_ALL, "portuguese");
	float peso, altura, imc;
	printf("Informe a sua altura: \n");
	scanf("%f",&altura);
	printf("Informe seu peso: \n");
	scanf("%f",&peso);	
	imc = peso/(altura*altura);
	if(imc < 18.5){
		printf("Você está abaixo do peso ideal!\n");
	}else{
		if(imc > 18.5 && imc < 24.9){
			printf("Parabéns, você está em seu peso normal!\n");
		}else{
			if(imc > 25.0 && imc < 29.9){
				printf("Você está acima do seu peso! (sobrepeso)\n");
			}else{
				if(imc > 30.0 && imc < 34.0){
					printf("Obesidade grau 1\n");
				}else{
					if(imc > 35.0 && imc < 39.0){
						printf("Obesidade grau 2\n");
					}else{
						if(imc > 39.0){
							printf("Obesidade grau 3\n");
						}
					}
				}
			}
		}
	}

	system("Pause");
	return 0;
}

