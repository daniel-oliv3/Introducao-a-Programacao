#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 10. Uma ag�ncia banc�ria possui dois tipos de investimentos, conforme o quadro a seguir. Fa�a um algoritmo
//que leia o tipo de investimento e seu valor, calcule e mostre o seu valor corrigido ap�s um m�s de
//investimento, de acordo com o tipo de investimento:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int op;
	float v, vr;
	printf("Informe o Tipo de Investimento: \n");
	printf("[1] - Poupan�a.\n");
	printf("[2] - Fundos de Renda Fixa.\n");
	printf("[3] - Previd�ncia Privada.\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("Poupan�a.\n");
			printf("Informe o valor do investimento: \n");
			scanf("%f",&v);
			vr = v+v*0.03;  // vr = v+0.03*v;
			printf("O valor �: %.2f\n",vr);
			break;
		case 2:
			printf("Fundos de Renda Fixa.\n");
			printf("Informe o valor do investimento: \n");
			scanf("%f",&v);
			vr = v+v*0.04;
			printf("O valor �: %.2f\n",vr);
			break;
		case 3:
			printf("Previd�ncia Privada.\n");
			printf("Informe o valor do investimento: \n");
			scanf("%f",&v);
			vr = v+v*3.5;
			printf("O valor �: %.2f\n",vr);
			break;
		default:
			printf("Tipo de Investimento Invalido!\n");
	}
	
	system("Pause");
	return 0;
}
