#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//34. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
//algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
//Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda
//de um tipo, a quantidade respectiva deve ser zero



int main()
{
	setlocale(LC_ALL, "portuguese");
	float m1, m5, m10, m25, m50, r1, total;
	
	printf("Informe a quantidades de moedas de 1 centavo: \n");
	scanf("%f",&m1);
	printf("Informe a quantidades de moedas de 5 centavos: \n");
	scanf("%f",&m5);
	printf("Informe a quantidades de moedas de 10 centavos: \n");
	scanf("%f",&m10);
	printf("Informe a quantidades de moedas de 25 centavos: \n");
	scanf("%f",&m25);
	printf("Informe a quantidades de moedas de 50 centavos: \n");
	scanf("%f",&m50);
	printf("Informe a quantidades de moedas de 1 real: \n");
	scanf("%f",&r1);
	total = (m1*0.01)+(m5*0.05)+(m10*0.10)+(m25*0.25)+(m50*0.50)+(r1*1.00);
	printf("O valor total economizado é: %.2f \n",total);
	system("pause");
	return 0;
	
}
