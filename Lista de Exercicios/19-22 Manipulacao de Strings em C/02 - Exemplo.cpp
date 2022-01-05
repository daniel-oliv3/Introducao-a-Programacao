#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//para ler string; comando scanf

int main()
{
	setlocale(LC_ALL, "portuguese");
	char re[10];
	printf("Digite seu nome: \n");
	scanf("%s",&re);
	printf("Oi %s\n",re);
	system("Pause");
	return 0;
}

