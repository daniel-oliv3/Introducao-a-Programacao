#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//13. Criar um algoritmo que entre com cinco notas de cada aluno de uma turma de 10 alunos e imprima: a media de cada
//aluno; a média da turma; a quantidade de aluno que tiveram média maiores ou igual a 5.0:

int main()
{
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, n4, n5, me, m;
	int r, c=0, a;
	do{
	a=1;	
	system("color 1F");	
	system("cls");
	printf("......................................................\n");	
	printf(" Programa que ler 5 notas de cada aluno de uma turma\n");
	printf(" de 10 alunos, e imprime a media de cada um aluno;\n");
	printf("......................................................\n\n");
	for(c=1;c<=10;c++){
		printf("  %dº Aluno\n",a);
		printf("  Digite a primeira nota: ");
		scanf("%f",&n1);
		printf("  Digite a segunda nota: ");
		scanf("%f",&n2);
		printf("  Digite a terceira nota: ");
		scanf("%f",&n3);
		printf("  Digite a quarta nota: ");
		scanf("%f",&n4);
		printf("  Digite a quinta nota: ");
		scanf("%f",&n5);
		m=(n1+n2+n3+n4+n5)/5;
		printf("  Media: %.2f\n\n",m);
		me=me+m;
		a++;
	}
	
	if(me>=5){
		me=me+m;
		}
	printf("  Total de alunos com media maior ou igual a 5: %.2f\n",me);	
	printf("  A media da turma é: %.2f\n",me);
	
	do{
		printf("\n1- Nova Execução\n");  
		printf("2- Sair\n"); 
		scanf("%d",&r); 
		if(r!=1 && r!=2) 
			printf("  <Número Inválido!>\n\a"); 
	}while(r!=1 && r!=2);
	system("cls");	
	}while(r!=2);
	system("Pause");
	return 0;
}

