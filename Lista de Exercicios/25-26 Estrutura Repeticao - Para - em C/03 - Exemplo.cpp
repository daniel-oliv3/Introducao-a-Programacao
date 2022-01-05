#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

// programa que imprime os valores de 1 a 20 estabelecendo um salto de contagem de 2 em 2 iniciando em 1;

int main()
{
	setlocale(LC_ALL, "portuguese");
	int c;
	for(c=1;c<=20;c+=2){ // += "mais, igual" para pular 2 em 2, nesse caso começa pelo 1,3,5,7,9,11,13,15,17,19;
		printf("%d -\n",c);
	}
	system("Pause");
	return 0;
}

