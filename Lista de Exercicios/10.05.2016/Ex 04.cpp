#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



int main()
{
	setlocale(LC_ALL, "portuguese");
	int quant, num;
	num=9;
	printf("Informe um número ou 999 para terminar: \n");
	scanf("%d",&num);
	while(num!=999){
		printf("O tripulo é: %d\n",num*3);
		printf("Informe um número ou 999 para terminar: \n");
		scanf("%d",&num);
	}
	system("Pause");
	return 0;
}

