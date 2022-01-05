#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//para comparar duas string
//strcmp, (usar como exemplo da lista das siglas)

int main()
{
	setlocale(LC_ALL, "portuguese");
	char re[80];
	printf("Digite a senha: ");
	gets(re);
	if(strcmp(re, "laranja")==0){
		printf("Senha correta\n");
	}
	else{
		printf("Senha invalida!\n");
	}
	system("Pause");
	return 0;
}

