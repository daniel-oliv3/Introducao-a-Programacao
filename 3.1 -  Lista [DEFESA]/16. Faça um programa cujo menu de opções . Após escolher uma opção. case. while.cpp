#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>


/*  INTRODU��O � PROGRAMA��O
Prof. S�rgio Roberto Costa Vieira - Estrutura de Repeti��o Aninhada
ESTRUTURAS DE REPETI��O;
*/

/* 16. Fa�a um programa cujo menu de op��es seja como apresentado abaixo. Ap�s escolher uma op��o, o usu�rio deve
informar o valor a ser usado para o c�lculo. N�o utilize fun��es pr�-definidas e utilize pelo menos dois tipos de
estruturas de repeti��o:
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
	printf("  PROGRAMA MATEM�TICA LEGAL\n  MENU DE OP��ES:\n\n");
	printf("  [1] Calcular Fatorial\n");
	printf("  [2] Calcular Potencia\n");
	printf("  [3] Calcular Fibonacci\n");
	printf("  [0] Encerrar o Programa\n");
	printf("  Digite uma op��o: ");
	scanf("%d",&op);
	system("cls");
	switch(op){
		case 1: 
			while(sair!=0){
				printf("\n\n  Digite um n�mero: ");
				scanf("%d",&i);
				printf("\n");
				for(; i>0; i--){
				fatorial*=i; // fatorial=fatorial*i;
				printf("    O n�mero Fatorial �: %d\n",fatorial); 
				}
				printf("\n\n  Deseja continuar ? 1: sim 2: n�o: ");
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
				printf("\n\n  Deseja continuar ? 1: sim 2: n�o: ");
				scanf("%d",&sair);
				system("cls");
				}
				break;
		case 3: 
				while(sair!=0){	
				fflush(stdin);
				printf("\n\n  Digite um n�mero de termo para a s�rie FIBONACCI: ");
				scanf("%d",&i);
				fflush(stdin);
				if(i < 0){
				printf("  <N�mero Inv�lido!>\n\a");
				}else{
				printf("  0 - 1");
				while(f2 < i){
				f3=f2+f1;
				printf("  - %d",f3);
				f1=f2;
				f2=f3;
					}				
				}
				printf("\n\n  Deseja continuar ? 1: sim 2: n�o: ");
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
