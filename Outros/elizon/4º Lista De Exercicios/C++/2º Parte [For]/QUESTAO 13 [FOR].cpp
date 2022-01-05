#include <stdio.h>
#include <conio.h>

int main()
{
	int n;
	float i;
	float soma=0;
	float resultado;

	printf("\n Informe Um Numero:  ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		resultado=1/i;
		printf("\n Termo: %.2f ", resultado);
		soma = soma + resultado; 
	}
	printf("\n");
	printf("\n A soma dos termos Sera : %.2f ",soma);	
	
	getch();
	return 0;
}
