#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 3 – Entrar com dois números inteiros e imprimir os seguintes dados
//de saída: dividendo, divisor, quociente, resto.

int main()
{
	setlocale(LC_ALL, "portuguese");
	int di, res, div, quoc; 
	printf("Informe o dividendo: \n");
	scanf("%d",&di);
	printf("Informe o divisor: \n");
	scanf("%d",&div);
	quoc = di/div;
	res = di%div;
	printf("Dividendo: %d\n",di);
	printf("Divisor: %d\n",div);
	printf("quociente: %d\n",quoc);
	printf("resto: %d\n",res);
	system("Pause");
	return 0;
}

