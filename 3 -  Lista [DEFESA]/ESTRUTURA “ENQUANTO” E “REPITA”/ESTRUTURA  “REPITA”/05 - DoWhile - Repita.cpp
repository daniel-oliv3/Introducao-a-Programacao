#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//#include<string.h>

//5. Faça um algoritmo que leia a idade de várias pessoas enquanto o usuário desejar e imprimir:
//- total de pessoas com menos de 21 anos;
//- total de pessoas com mais de 50 anos;

//while

int main()
{
	setlocale(LC_ALL, "portuguese");
	int r, idade, p21, p50, ca;
	p21=0;
	p50=0;
	do{
	system("color 1F");	
	system("cls");
	printf(".......................................................\n");	
	printf(" Programa que ler a idade de várias pessoas e imprime:\n");
	printf("  - Total de pessoas com menos de 21 anos;\n");
	printf("  - Total de pessoas com mais de 50 anos;\n");
	printf(".......................................................\n\n");
	printf("  Deseja realizar um cadastro ? 1 - Sim: 2 - Não: ");
	scanf("%d",&ca);
	do{ 
		if(idade<=21){
			p21++;
		}else{
			if(idade>=50){
				p50++;
			}
		}
		system("cls");
		printf("  Digite uma idade: ");
		scanf("%d",&idade);
		printf("  Deseja realizar um cadastro ? 1 - Sim: 2 - Não: ");
		scanf("%d",&ca);
		system("cls");
	}while(ca==1);
	printf("\n    - Total de pessoas com menos de 21 anos: %d\n",p21);
	printf("    - Total de pessoas com mais de 50 anos: %d\n",p50);
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

