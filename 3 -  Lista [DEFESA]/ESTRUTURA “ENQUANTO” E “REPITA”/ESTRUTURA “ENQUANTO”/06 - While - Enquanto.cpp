#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//6. A s�rie de Fibonacci � formada pela seguinte sequ�ncia: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... etc. Escreva um
//algoritmo que gere a s�rie de Fibonacci conforme o termo que o usu�rio informar:

int main()
{
	setlocale(LC_ALL, "portuguese");	
	int numero, f1=0, f2=1, f3;
	system("color 1F");	
	printf("......................................................\n");	
	printf("            Programa s�rie de Fibonacci\n");
	printf("......................................................\n\n");	
	printf("  Digite um n�mero de termo para a s�rie FIBONACCI: ");
	scanf("%d",&numero);
	if(numero < 0){
		printf("  <N�mero Inv�lido!>\n\a");
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

