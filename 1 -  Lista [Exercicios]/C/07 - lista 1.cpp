#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//7. Fa�a um algoritmo que calcule as medidas de uma sala em metros (comprimento e largura), bem como o
//pre�o do metro quadrado de carpete, exibindo como resultado o custo total para forrar o piso da sala:


int main()
{
	setlocale(LC_ALL, "Portuguese");
	system("color 1f");
	float comp, larg, preco, result;
	printf("\n\n  Informe o Comprimento: ");
	scanf("%f",&comp);
	printf("  Informe a Largura: ");
	scanf("%f",&larg);
	printf("  Informe o Pre�o do M� do Carpete: ");
	scanf("%f",&preco);
	result = (comp*larg)*preco;
	printf("  O Custo Total �: %.2f\n",result);
	system("pause");
	return 0;	
}
