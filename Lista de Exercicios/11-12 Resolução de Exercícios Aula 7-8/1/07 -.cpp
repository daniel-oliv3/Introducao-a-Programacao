#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//7 � Fa�a um algoritmo para calcular a m�dia final dos alunos da 5�
//S�rie. Os alunos realizar�o cinco provas: P1, P2, P3, P4 e P5.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float P1, P2, P3, P4, P5, r;
	printf("Informe a nota da prova 1: \n");
	scanf("%f",&P1);
	printf("Informe a nota da prova 2: \n");
	scanf("%f",&P2);
	printf("Informe a nota da prova 3: \n");
	scanf("%f",&P3);
	printf("Informe a nota da prova 4: \n");
	scanf("%f",&P4);
	printf("Informe a nota da prova 5: \n");
	scanf("%f",&P5);
	r = (P1+P2+P3+P4+P5)/5;
	printf("A m�dia final dos alunos da 5� �: %.2f\n",r);
	
	
	system("Pause");
	return 0;
}

