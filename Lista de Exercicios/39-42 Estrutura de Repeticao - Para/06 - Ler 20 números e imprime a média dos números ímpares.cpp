#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//P6 � Fa�a um algoritmo para ler 20 n�meros e
//escrever a m�dia dos n�meros que s�o
//�mpares:

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1f");
	int c, cont, numero;
	float m;
	printf("\n\n");
	for(c=1; c<=20; c++){
		printf("\n\n  Digite o %d� n�mero: ",c);
		scanf("%d",&numero);
		if(numero % 2 == 1){ // se(x mod 2 igual a 1)x variavel, % mod e o resto da divisao, 2 sera pelo qual o valor de x sera dividido, == compara��o, 0 seria o valor do resto, numero par, se o resto n�o for 0 o numero sera impar
				cont=cont+1;
		}
		m=m+numero;
		system("cls");
	}
	printf("\n\n A m�dia dos n�meros �mpares �: %.2f\n",m/cont); //media
	
	system("Pause");
	return 0;
}

