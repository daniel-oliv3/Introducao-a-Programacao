#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//9. Faça um algoritmo que leia o total de alunos de uma classe de informática, sendo que eles tiveram três provas P1,
//P2 e P3. Deve imprimir: total dos que foram aprovados em todas as provas; total dos alunos aprovados na prova 1; a
//porcentagem dos alunos aprovados na prova 3; (Considere aprovado com nota superior a 6.0)

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome[40];
	float p1, p2, p3, perc, media;
	int cont_m=0, cont=1, num, cont1=1, cont2=1, cont3=1;
	system("color 1F");	
	printf("  Digite o total de alunos de uma classe de informática: ");
	scanf("%d",&num);
	do{
		fflush(stdin);
		printf("\n  Digite o nome do %dº aluno: ",cont);
		gets(nome);
		fflush(stdin);
		printf("  Digite a primeira prova: ");
		scanf("%f",&p1);
		printf("  Digite a segunda prova: ");
		scanf("%f",&p2);
		printf("  Digite a terceira prova: ");
		scanf("%f",&p3);
		media=(p1+p2+p3)/3;
		printf("\n    Aluno: %s\n    Média: %.2f\n",nome,media);
		printf("    ...................\n");
		if(media>=6){
			cont_m++;
				}else{
					if(p1>=6){
						cont2++;
					}else{
						if(p3>=6){
							cont3++;
						perc=(cont3/num)*100;
						}
					}
				}
			cont++;
			cont3++;
		}while(cont<=num);
	printf("\n  Total de alunos aprovados em todas as provas: %d\n",cont_m);
	printf("  total de alunos aprovados na prova 1: %d\n",cont2);
	printf("  Porcentagem de alunos aprovado na P3: %.2f\n",perc);
	system("Pause");
	return 0;
}

