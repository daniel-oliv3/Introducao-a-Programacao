#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//3. Faça um algoritmo que leia números inteiros e imprimir o quadrado de cada número até entrar um número múltiplo
//de 5 que deverá ter seu quadrado também impresso:

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
	int n=3;
		 do{
		  	printf("\n  Digite um número: ");
		  	scanf("%d",&n);
		  	printf("\n  Quadrado: %d\n",n*n);
			}while(n%5!=0);
	
	system("Pause");
	return 0;
}

