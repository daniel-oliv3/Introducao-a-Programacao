#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 22. Elabore um algoritmo que leia o valor de dois n�meros inteiros e o operador aritm�tico desejado: calcule,
//ent�o, a resposta adequada. Utilize os s�mbolos abaixo: (Resolver com Se�s Aninhados e tamb�m com
//M�ltipla Escolha).
//+ Adi��o; - Subtra��o; * Multiplica��o; / Divis�o;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num1, num2, op, r;
	printf("Informe o primeiro n�mero: \n");
	scanf("%d",&num1);
	printf("Informe o Segundo n�mero: \n");
	scanf("%d",&num2);
	printf("Informe o Operador Aritm�tico:\n");
	printf("[1] + Adi��o\n");
	printf("[2] - Subtra��o\n");
	printf("[3] x Multiplica��o\n");
	printf("[4] / Divis�o\n");
	scanf("%d",&op);
	if(op == 1){
		r = num1+num2;
		printf("Resultado da Soma �: %d + %d = %d\n",num1,num2,r);
	}else{
		if(op == 2){
		r = num1-num2;
		printf("Resultado da Subtra��o �: %d - %d = %d\n",num1,num2,r);
		}else{
			if(op == 3){
			r = num1*num2;
			printf("Resultado da Multiplica��o �: %d x %d = %d\n",num1,num2,r);
			}else{
				if(op == 4){
		r = num1/num2;
		printf("Resultado da Divis�o �: %d / %d = %d\n",num1,num2,r);
				}else
				printf("N�mero Invalido!\n");
			}
		}
	}

	system("Pause");
	return 0;
}

