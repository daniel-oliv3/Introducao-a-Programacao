#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//17. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
//forem verificar se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo,
//escrever uma mensagem. Considere as seguintes propriedades:
//O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
//Equiláteros: tem os comprimentos dos três lados iguais;
//Isósceles: tem os comprimentos de dois lados iguais;
//Escaleno: tem os comprimentos dos três lados diferentes

int main()
{
	setlocale(LC_ALL, "portuguese");
	float a, b, c;
	printf("Informe o valor de X: \n");
	scanf("%f",&a);
	printf("Informe o valor de Y: \n");
	scanf("%f",&b);
	printf("Informe o valor de Z: \n");
	scanf("%f",&c);
	if ((a <= 0) || (b <= 0) || (c <= 0) || (a>(b+c)) || (b>(a+c)) || (c>(a+b)))
        printf("\nNão formam um triângulo!\n");
    else
        if ((a==b) && (b==c))
            printf("\nÉ triângulo equilátero!\n");
        else
            if ((a==b) || (b==c) || (a==c))
                printf("\nÉ triângulo isósceles!\n");
            else
                printf("\nÉ triângulo escaleno!\n");
	system("Pause");
	return 0;
}

