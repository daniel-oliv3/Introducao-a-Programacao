#include<stdio.h>
#include<stdlib.h> // esta fun��es fazem parte do arquivo de cabe�alho stdlib.h
#include<locale.h>

//convertendo string em n�mero.

int main()
{
	setlocale(LC_ALL, "portuguese");
	char str[80];
	int resultado;
	float resultado2;
	scanf("%s", &str);
	resultado = atoi(str);
	printf("Convers�o: %s - %d\n",str, resultado);
	scanf("%s", &str);
	resultado2 = atof(str);
	printf("Convers�o: %s - %f\n", str, resultado2);
	system("Pause");
	return 0;
}

