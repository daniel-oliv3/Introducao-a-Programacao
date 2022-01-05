#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 15 – Calcule e apresente o volume de uma caixa retangular por
//meio da fórmula (volume = comprimento * largura * altura).

int main()
{
	setlocale(LC_ALL, "portuguese");
	float volume, comprimento, largura, altura;
	printf("Informe o comprimento da caixa retangular: \n");
	scanf("%f",&comprimento);
	printf("informe a altura da caixa retangular: \n");
	scanf("%f",&altura);
	printf("informe a largura da caixa retangular: \n");
	scanf("%f",&largura);
	volume = comprimento*largura*altura;
	printf("O volume da caixa retangular é: %.2f\n",volume);
	system("Pause");
	return 0;
}

