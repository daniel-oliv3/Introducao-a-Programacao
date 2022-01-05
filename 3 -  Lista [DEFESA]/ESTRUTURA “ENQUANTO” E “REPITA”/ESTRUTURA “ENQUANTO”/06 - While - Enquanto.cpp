#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//6. A série de Fibonacci é formada pela seguinte sequência: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... etc. Escreva um
//algoritmo que gere a série de Fibonacci conforme o termo que o usuário informar:

int main()
{
	setlocale(LC_ALL, "portuguese");	
	int numero, f1=0, f2=1, f3;
	system("color 1F");	
	printf("......................................................\n");	
	printf("            Programa série de Fibonacci\n");
	printf("......................................................\n\n");	
	printf("  Digite um número de termo para a série FIBONACCI: ");
	scanf("%d",&numero);
	if(numero < 0){
		printf("  <Número Inválido!>\n\a");
	}else{
		printf("  0 - 1");
	while(f2 < numero){
		f3=f2+f1;
		printf("  - %d",f3);
		f1=f2;
		f2=f3;
		}	
	}
	printf("\n");
	system("Pause");
	return 0;
}

