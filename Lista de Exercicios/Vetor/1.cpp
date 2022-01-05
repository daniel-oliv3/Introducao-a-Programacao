#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Vetor - Exemplo 1*/

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i; // variavel comtroladora ou contadora.
	printf("\n");
	float v[6]={2.3, 5.4, 1.0, 7.6, 8.8, 3.9}; // incinializando o vetor
	for(i-0; i<6; i++){
		printf("  %.2f\n",v[i]); // imprimindo os valores
	}
	system("Pause");
	return 0;
}

