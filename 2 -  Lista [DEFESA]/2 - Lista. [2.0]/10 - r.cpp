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
	float v, vr, a;
	printf("Informe o Tipo de Investimento: \n");
	printf("[1] - Poupan�a.\n");
	printf("[2] - Fundos de Renda Fixa.\n");
	printf("[3] - Previd�ncia Privada.\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("Poupan�a.\n");
			a = 0.03;//vr = v+v*0.03;  // vr = v+0.03*v;
			break;
		case 2:
			printf("Fundos de Renda Fixa.\n");
			a = 0.04;//vr = v+v*0.04;
			break;
		case 3:
			printf("Previd�ncia Privada.\n");
			a = 3.5;//vr = v+v*3.5;
			break;
		default:
			printf("Tipo de Investimento Invalido!\n");
	}
	printf("Informe o valor do investimento: \n");
	scanf("%f",&v);
	vr = v+v*a;
	printf("O valor �: %.2f\n",vr);
	system("Pause");
	return 0;
}

