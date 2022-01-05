#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

// 18. Uma pessoa comprou cinco artigos em uma loja. Para cada artigo, tem-se nome, preço e percentual de
//desconto. Faça um algoritmo que imprima o nome, preço e o preço com desconto de cada artigo da loja. No
//final apresente também o total a pagar:


int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome1[20], nome2[20], nome3[20], nome4[20], nome5[20];
	float pro1, pro2, pro3, pro4, pro5;
	float perc1, perc2, perc3, perc4, perc5;
	float result1, result2, result3, result4, result5, total;
	
	printf("Informe o nome do primeiro produto: \n");
	scanf("%s",&nome1);
	printf("Informe o preço do produto: \n");
	scanf("%f",&pro1);
	printf("Informe o percentual de desconto: \n");
	scanf("%f",&perc1);
	
	result1 = pro1-(pro1*perc1/100);
	
	printf("Informe o nome do segundo produto: \n");
	scanf("%s",&nome2);
	printf("Informe o preço do produto: \n");
	scanf("%f",&pro2);
	printf("Informe o percentual de desconto: \n");
	scanf("%f",&perc2);
	
	result2 = pro2-(pro2*perc2/100);
	
	printf("Informe o nome do terceiro produto: \n");
	scanf("%s",&nome3);
	printf("Informe o preço do produto: \n");
	scanf("%f",&pro3);
	printf("Informe o percentual de desconto: \n");
	scanf("%f",&perc3);
	
	result3 = pro3-(pro3*perc3/100);
	
	printf("Informe o nome do quarto produto: \n");
	scanf("%s",&nome4);
	printf("Informe o preço do produto: \n");
	scanf("%f",&pro4);
	printf("Informe o percentual de desconto: \n");
	scanf("%f",&perc4);
	
	result4 = pro4-(pro4*perc4/100);
	
	printf("Informe o nome do quinto produto: \n");
	scanf("%s",&nome5);
	printf("Informe o preço do produto: \n");
	scanf("%f",&pro5);
	printf("Informe o percentual de desconto: \n");
	scanf("%f",&perc5);
	
	result5 = pro5-(pro5*perc5/100);
	
	printf("O %s era de %.2f agora é: %.2f\n",nome1,pro1,result1);
	printf("O %s era de %.2f agora é: %.2f\n",nome2,pro2,result2);
	printf("O %s era de %.2f agora é: %.2f\n",nome3,pro3,result3);
	printf("O %s era de %.2f agora é: %.2f\n",nome4,pro4,result4);
	printf("O %s era de %.2f agora é: %.2f\n",nome5,pro5,result5);
	
	total = perc1+perc2+perc3+perc4+perc5;
	
	printf("O total é: R$: %.2f",total);
	
	system("pause");
	return 0;
	
}
