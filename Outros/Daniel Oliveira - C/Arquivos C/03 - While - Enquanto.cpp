#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//3. Fa�a um algoritmo que leia n�meros inteiros e imprimir o quadrado de cada n�mero at� entrar um n�mero m�ltiplo
//de 5 que dever� ter seu quadrado tamb�m impresso:

int main()
{
	setlocale(LC_ALL, "portuguese");
	system("color 1F");
	int n=3;
		 do{
		  	printf("\n  Digite um n�mero: ");
		  	scanf("%d",&n);
		  	printf("\n  Quadrado: %d\n",n*n);
			}while(n%5!=0);
	
	system("Pause");
	return 0;
}

