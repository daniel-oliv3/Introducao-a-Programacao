#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Criar um algoritmo para verificar se um n�mero � positivo e maior que 10;
// - Se for maior ou igual escreva sua metade, Se for menor escreva seu dobro.
// - Se for negativo multiplique por (-1) e escreva seu valor.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float n, m=0, d=0;
	printf("Informe um n�mero: \n");
	scanf("%f",&n);
	if(n>=0){
		if(n>=10){
			m=n/2;
			printf("Sua metade �: %.2f\n",m);
		}else{
			d=n*2;
			printf("Seu dobro �: %.2f\n",d);
		}
	}else{
		n=n*(-1);
		printf("O valor de N �: %.2f\n",n);
	}
	system("Pause");
	return 0;
}

