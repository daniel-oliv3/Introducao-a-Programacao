#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// exemplo if, 
//Algoritmo para ler dois n�meros e escrever "N�meros iguais" se dos dois forem iguais.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b;
	printf("Entre com o primeiro n�mero: \n");
	scanf("%d",&a);
	printf("Entre com o segundo n�mero: \n");
	scanf("%d",&b);
	if(a == b){
		printf("N�meros Iguais!\n");
	}
	if(a != b){ //se(a diferente b)
		printf("N�meros Diferentes!\n");
	}
	system("Pause");
	return 0;
}

