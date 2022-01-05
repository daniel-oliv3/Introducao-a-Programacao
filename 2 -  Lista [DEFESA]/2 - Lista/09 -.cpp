#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 9. Criar um algoritmo que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
//constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão tirar
//para serem aprovados, considerando que a média exigida é 6.0:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, m, mex, pf;
	printf("Informe a primeira nota: \n");
	scanf("%f",&n1);
	printf("Informe a segunda nota: \n");
	scanf("%f",&n2);
	printf("Informe a terceira nota: \n");
	scanf("%f",&n3);
	m = (n1+n2+n3)/3;
	printf("Sua média é: %.2f\n",m);
	if(m >= 0.0 && m < 5.0){
		printf("Aluno Reprovado!\n");
	}else{
		if(m >= 7.0 && m <= 10.0){
			printf("Aluno Aprovado!\n");
		}else{
			if(m >= 5.0 && m < 7.0){
				printf("Aluno Vai Para Exame Final!\n");
				//printf("Nota: %.2f\n",12-m); //nota para passar
				printf("\nInforme a nota do Exame Final: \n");
				scanf("%f",&pf);
				mex = (m+pf)/2;
				if(mex >= 6.0){
					printf("Aluno Aprovado!\n");
				}else
					printf("Aluno Reprovado!\n");
			}
		}
	}	
	system("Pause");
	return 0;

}
