#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//17. Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo e, se
//forem verificar se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles n�o formarem um tri�ngulo,
//escrever uma mensagem. Considere as seguintes propriedades:
//O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
//Equil�teros: tem os comprimentos dos tr�s lados iguais;
//Is�sceles: tem os comprimentos de dois lados iguais;
//Escaleno: tem os comprimentos dos tr�s lados diferentes

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
        printf("\nN�o formam um tri�ngulo!\n");
    else
        if ((a==b) && (b==c))
            printf("\n� tri�ngulo equil�tero!\n");
        else
            if ((a==b) || (b==c) || (a==c))
                printf("\n� tri�ngulo is�sceles!\n");
            else
                printf("\n� tri�ngulo escaleno!\n");
	system("Pause");
	return 0;
}

