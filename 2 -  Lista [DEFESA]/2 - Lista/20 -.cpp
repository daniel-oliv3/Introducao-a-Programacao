#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//20. Fa�a um algoritmo que receba dois n�meros e execute as opera��es listadas a seguir, de acordo com a
//escolha do usu�rio:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int op;
	float num1, num2, r;
	printf("Informe o primeiro n�mero: \n");
	scanf("%f",&num1);
	printf("Informe o segundo n�mero: \n");
	scanf("%f",&num2);
	printf("Informe a opera��o:\n");
	printf("[1] M�dia entre os n�meros digitados\n");
	printf("[2] Diferen�a do maior pelo menor\n");
	printf("[3] Produto entre os n�meros digitados\n");
	printf("[4] Divis�o do primeiro pelo segundo\n");
	scanf("%d",&op);
    if(op == 1)
    { 	r = (num1+num2)/2;
		printf("M�dia entre os n�meros digitados �: %.2f\n",r);
	}else{
		if(op == 2){
			if(num1>num2){
				r = (num1-num2);
				printf("Diferen�a do maior pelo menor �: %.2f\n",r);
			    }
		if(num2>num1){
				r = (num2-num1);
				printf("Diferen�a do maior pelo menor �: %.2f\n",r);
				}	
		}else{
			if(op == 3){
				r = num1*num2;
				printf("Produto entre os n�meros digitados �: %.2f\n",r);
			}else{
				if(op == 4){
					r = num1/num2;
					printf("Divis�o do primeiro pelo segundo �: %.2f\n",r);
				}else
					printf("N�mero Invalido!\n");
			}
		}
	}
	system("pause");
	return 0;
}
