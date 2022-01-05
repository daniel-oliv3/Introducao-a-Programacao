#include<stdio.h>
#include<stdlib.h> // esta funções fazem parte do arquivo de cabeçalho stdlib.h
#include<locale.h>

//convertendo string em número.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char str[80];
	int resultado;
	float resultado2;
	scanf("%s", &str);
	resultado = atoi(str);
	printf("Conversão: %s - %d\n",str, resultado);
	scanf("%s", &str);
	resultado2 = atof(str);
	printf("Conversão: %s - %f\n", str, resultado2);
	system("Pause");
	return 0;
}

