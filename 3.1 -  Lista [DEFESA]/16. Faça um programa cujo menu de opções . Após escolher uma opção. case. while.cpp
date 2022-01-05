#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>


/*  INTRODUÇÃO À PROGRAMAÇÃO
Prof. Sérgio Roberto Costa Vieira - Estrutura de Repetição Aninhada
ESTRUTURAS DE REPETIÇÃO;
*/

/* 16. Faça um programa cujo menu de opções seja como apresentado abaixo. Após escolher uma opção, o usuário deve
informar o valor a ser usado para o cálculo. Não utilize funções pré-definidas e utilize pelo menos dois tipos de
estruturas de repetição:
PROGRAMA MATEMATICA LEGAL
MENU DE OPCOES:
[1] Calcular Fatorial
[2] Calcular Potencia
[3] Calcular Fibonacci
[0] Encerrar o Programa
DIGITE UMA OPCAO:;*/


int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int fatorial=1, i=0, op, f1=0, f2=1, f3, base, expoente, result, sair=1;
	printf("  PROGRAMA MATEMÁTICA LEGAL\n  MENU DE OPÇÕES:\n\n");
	printf("  [1] Calcular Fatorial\n");
	printf("  [2] Calcular Potencia\n");
	printf("  [3] Calcular Fibonacci\n");
	printf("  [0] Encerrar o Programa\n");
	printf("  Digite uma opção: ");
	scanf("%d",&op);
	system("cls");
	switch(op){
		case 1: 
			while(sair!=0){
				printf("\n\n  Digite um número: ");
				scanf("%d",&i);
				printf("\n");
				for(; i>0; i--){
				fatorial*=i; // fatorial=fatorial*i;
				printf("    O número Fatorial é: %d\n",fatorial); 
				}
				printf("\n\n  Deseja continuar ? 1: sim 2: não: ");
				scanf("%d",&sair);
				system("cls");
			}
		
				break;
		case 2: 
				while(sair!=0){
				printf("\n\n  Digite a base: ");
				scanf("%d",&base);
				printf("  Digite o expoente: ");
				scanf("%d",&expoente);
				result=pow(base, expoente);
				printf("  A base: %d elevada ao expoente: %d equivale a = %d\n",base,expoente,result);
				printf("\n\n  Deseja continuar ? 1: sim 2: não: ");
				scanf("%d",&sair);
				system("cls");
				}
				break;
		case 3: 
				while(sair!=0){	
				fflush(stdin);
				printf("\n\n  Digite um número de termo para a série FIBONACCI: ");
				scanf("%d",&i);
				fflush(stdin);
				if(i < 0){
				printf("  <Número Inválido!>\n\a");
				}else{
				printf("  0 - 1");
				while(f2 < i){
				f3=f2+f1;
				printf("  - %d",f3);
				f1=f2;
				f2=f3;
					}				
				}
				printf("\n\n  Deseja continuar ? 1: sim 2: não: ");
				scanf("%d",&sair);
				fflush(stdin);
				system("cls");
				}
				break;
			}
	printf("\n");
	system("Pause");
	return 0;
}

/* Aluno: Daniel Oliveira de Souza;
   Faculdade: FUCAPI;
*/
