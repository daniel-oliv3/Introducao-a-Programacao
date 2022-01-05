#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int num, soma;
	printf("Informe um número: \n");
	scanf("%d", &num);
	soma=num;
	while(soma<=10){
		printf("Sucessor do número: %d\n",num+1);
		printf("Informe um número: \n");
		scanf("%d",&num);
		if(num>0)
			printf("Informe números positivos: \n");
		soma=soma+num;	
	}	
	
	
	system("Pause");
	return 0;
}

