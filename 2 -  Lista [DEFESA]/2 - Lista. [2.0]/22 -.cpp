#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 22. Elabore um algoritmo que leia o valor de dois números inteiros e o operador aritmético desejado: calcule,
//então, a resposta adequada. Utilize os símbolos abaixo: (Resolver com Se’s Aninhados e também com
//Múltipla Escolha).
//+ Adição; - Subtração; * Multiplicação; / Divisão;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2, op, r;
	printf("== Informe o Operador Aritmético ==\n");
	printf("[1] + Adição\n");
	printf("[2] - Subtração\n");
	printf("[3] x Multiplicação\n");
	printf("[4] / Divisão\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("Informe o primeiro número: \n");
			scanf("%d",&num1);
			printf("Informe o Segundo número: \n");
			scanf("%d",&num2);
			r = num1+num2;
			printf("Resultado da Soma é: %d + %d = %d\n",num1,num2,r);
			break;		
		case 2:
			printf("Informe o primeiro número: \n");
			scanf("%d",&num1);
			printf("Informe o Segundo número: \n");
			scanf("%d",&num2);
			r = num1-num2;
			printf("Resultado da Subtração é: %d - %d = %d\n",num1,num2,r);
			break;
		case 3:
			printf("Informe o primeiro número: \n");
			scanf("%d",&num1);
			printf("Informe o Segundo número: \n");
			scanf("%d",&num2);
			r = num1*num2;
			printf("Resultado da Multiplicação é: %d x %d = %d\n",num1,num2,r);
			break;
		case 4:
			printf("Informe o primeiro número: \n");
			scanf("%d",&num1);
			printf("Informe o Segundo número: \n");
			scanf("%d",&num2);
			r = num1/num2;
			printf("Resultado da Divisão é: %d / %d = %d\n",num1,num2,r);
			default:
				printf("Número Invalido!\n");
	}
	system("Pause");
	return 0;
}

