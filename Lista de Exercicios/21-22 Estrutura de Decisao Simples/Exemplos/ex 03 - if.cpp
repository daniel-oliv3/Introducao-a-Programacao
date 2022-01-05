#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// exemplo if, 
//Algoritmo para ler dois números e escrever "Números iguais" se dos dois forem iguais.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int a, b;
	printf("Entre com o primeiro número: \n");
	scanf("%d",&a);
	printf("Entre com o segundo número: \n");
	scanf("%d",&b);
	if(a == b){
		printf("Números Iguais!\n");
	}
	if(a != b){ //se(a diferente b)
		printf("Números Diferentes!\n");
	}
	system("Pause");
	return 0;
}

