#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
#include<math.h>

//criar um algoritmo que leia 20 n�meros e imprimir a soma dos n�meros cujo o quadrados s�o menores que 225;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a;
	float numero, soma=0;
	for(a=1;a<=20;a++){
		printf("Informe o n�mero: \n");
		scanf("%f",&numero);
		if(pow(numero,2)<225){
			soma=soma+numero;
		}
		printf("A soma �: %.2f\n",soma);
	}
	system("Pause");
	return 0;
}

