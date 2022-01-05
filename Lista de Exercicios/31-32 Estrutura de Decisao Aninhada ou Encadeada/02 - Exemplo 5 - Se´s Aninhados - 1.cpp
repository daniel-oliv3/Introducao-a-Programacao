#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float num;
	printf("Informe o número: \n");
	scanf("%f",&num);
	if(num>0){
		printf("Positivo\n");
	}else if(num<0){
		printf("Negativo\n");
	}else{
		printf("Nulo\n");
	}
	system("Pause");
	return 0;
}

