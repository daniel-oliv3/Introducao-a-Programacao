#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 19 -Fa�a um programa que leia o peso e a altura de uma pessoa,fa�a o c�lculo do IMC (�ndice de Massa
//Corporal) e informe se ele est� abaixo do peso, no peso ideal, acima do peso ou seu grau de obesidade.
//IMC = peso/altura2
//C�LCULO

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
		printf("Voc� est� abaixo do peso ideal!\n");
	}else{
		if(imc > 18.5 && imc < 24.9){
			printf("Parab�ns, voc� est� em seu peso normal!\n");
		}else{
			if(imc > 25.0 && imc < 29.9){
				printf("Voc� est� acima do seu peso! (sobrepeso)\n");
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

