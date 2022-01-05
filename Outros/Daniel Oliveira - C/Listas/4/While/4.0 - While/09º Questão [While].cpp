#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	float n_alu,cont=1,cont2=0;
	char nome[20];
	float p1,p2,p3,nota,porc;
	
	printf("Digite quantos alunos tem na sala\n");
	scanf("%f",&n_alu);
	
	while(cont<=n_alu){
		printf("Digite o nome do aluno\n");
		scanf("%s",&nome);
		printf("Digite sua primeira nota\n");
		scanf("%f",&p1);
		printf("Digite sua segunda nota\n");
		scanf("%f",&p2);
		printf("Digite sua terceira nota\n");
		scanf("%f",&p3);
		
		nota=(p1+p2+p3)/3;
		
		if(nota>=6){
			printf("Os Aprovados são %s\n",nome);
		}
		if(p1>=6){
			printf("Os Aprovados na primeira prova são %s\n",nome);
		}
		if(p3>=6){
			cont2++;
			porc=(cont2/n_alu)*100;
			printf("A porccentagem dos alunos aprovados na 3 prova é de %3.2f%%\n",porc);
		}
		cont++;	
	}

}
