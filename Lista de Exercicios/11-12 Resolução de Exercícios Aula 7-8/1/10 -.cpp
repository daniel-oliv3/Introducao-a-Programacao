#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//10 � Leia 2 vari�veis A e B, que correspondem a 2 notas de um aluno. A
//seguir, calcule a m�dia do aluno, sabendo que a nota A tem peso 3,5 e a
//nota B tem peso 7,5. No final apresente a m�dia do aluno.

int main()
{
	setlocale(LC_ALL, "portuguese");
	float A, B, m;
	printf("Informe a nota 1: \n");
	scanf("%f",&A); 
	printf("Informe a nota 2: \n");
	scanf("%f",&B); 
	m = ((A*3.5) + (B*7.5))/ (3.5+7.5);	
	printf("A m�dia do aluno �: %.2f\n",m);
	system("Pause");
	return 0;
}

