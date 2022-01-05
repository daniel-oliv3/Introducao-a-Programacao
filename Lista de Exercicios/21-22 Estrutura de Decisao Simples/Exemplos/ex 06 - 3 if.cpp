#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//exemplo, pg 26

int main()
{
	setlocale(LC_ALL, "portuguese");
	int id;
	printf("Informe a sua idade: \n");
	scanf("%d",&id);
	if(id > 0 && id < 18){
		printf("Menor de Idade!\n");
	}
	if(id >= 18 && id < 65){
		printf("Maior de Idade!\n");
	}
	if(id >= 65){
		printf("Idoso!\n");
	}
	system("Pause");
	return 0;
}

