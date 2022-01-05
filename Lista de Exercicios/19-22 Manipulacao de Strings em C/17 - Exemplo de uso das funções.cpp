#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//#include<locale.h>

int main()
{
	//setlocale(LC_ALL, "portuguese");
	system("color 1f");
	char palavra[30], palavra2[30], teste[30];
	int tam, comp;
	printf("Informe uma string: \n");
	gets(palavra);
	printf("A palavra digitada %c %s\n",130,palavra);
	printf("Informe uma segunda string: \n");
	gets(palavra2);
	printf("A palavra digitada %c %s\n",130,palavra2);
	strcpy(teste,"aula teste");
	printf("A palavra copiada %c %s\n",130,teste);
	strcat(teste,"1");
	printf("A palavra concatenada %c %s\n",130,teste);
	tam=strlen(palavra);
	printf("O tamanho da 1a. string %c %d\n",130,tam);
	comp=strcmp(palavra,palavra2);
	if(comp==0)
		printf("Sao Iguais: %d\n",comp);
			else
				printf("Sao diferentes: %d\n",comp);
	printf("Maiusculo: %s\n",strupr(palavra));	
	printf("Minusculo: %s\n",strlwr(palavra));			
	system("Pause");
	return 0;
}

