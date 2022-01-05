#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//20. Faça um algoritmo que receba dois números e execute as operações listadas a seguir, de acordo com a
//escolha do usuário:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int c;
	float num1, num2, r;
	printf("== Informe a operação ==\n");
	printf("[1] Média entre os números digitados\n");
	printf("[2] Diferença do maior pelo menor\n");
	printf("[3] Produto entre os números digitados\n");
	printf("[4] Divisão do primeiro pelo segundo\n");
	scanf("%d",&c);
	printf("Informe o primeiro número: \n");
	scanf("%f",&num1);
	printf("Informe o segundo número: \n");
	scanf("%f",&num2);
    switch(c){
    	case 1:
    		r = (num1+num2)/2;
			printf("Média entre os números digitados é: %.2f\n",r);
			break;    	
    	case 2:
    		if(num1>num2){
				r = (num1-num2);
				printf("Diferença do maior pelo menor é: %.2f\n",r);
			    }
			if(num2>num1){
				r = (num2-num1);
				printf("Diferença do maior pelo menor é: %.2f\n",r);
				} break;
		case 3:
			r = num1*num2;
				printf("Produto entre os números digitados é: %.2f\n",r);
				break;
		case 4:
			r = num1/num2;
					printf("Divisão do primeiro pelo segundo é: %.2f\n",r);
				default:
					printf("Número Invalido!\n");	
	}
	system("pause");
	return 0;
}
