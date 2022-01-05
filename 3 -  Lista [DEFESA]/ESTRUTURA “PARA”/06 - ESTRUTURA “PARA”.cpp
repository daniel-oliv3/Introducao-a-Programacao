#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//6. Faça um algoritmo que entre com o nome e salário bruto de 10 pessoas. Imprimir nome e o valor de alíquota do
//imposto de renda:
//a) salário < 600 (isento) b) salário >=600 e < 1.500 (10% do valor bruto) c) salário >= 1.500 (15%)

int main()
{
	setlocale(LC_ALL, "portuguese");
	char nome[100];
	int c, r;
	float re, sb, vb;
	do{
	system("color 1F");	
	system("cls");	
	printf("..........................................................\n");
	printf(" Programa que entra com o nome e o salario de 10 pessoas\n");
	printf(" - imprime nome e o valor de alíquota\n");
	printf("..........................................................\n\n");
	for(c=1;c<=10;c++){
		fflush(stdin);
		printf("  Digite o nome da %dº pessoa: ",c);
		gets(nome); 
		fflush(stdin);
		printf("  Digite o salário bruto: ");
		scanf("%f",&sb);
		if(sb < 600){
			re=0.;
		}else{
			if(sb >= 600 && sb <=1500){
				re=sb*0.10;	
			}else{
				if(sb >= 1500){
					re=sb*0.15;
				}
			}
		}
	printf("\n....................................................\n\n");	
	printf("\n    Nome: %s \n    Valor de alíquota do imposto de renda R$: %.2f\n\n",nome,re);
	}
	do{
		printf("\n1- Nova Execução\n\a");  
		printf("2- Sair\n"); 
		scanf("%d",&r); 
		if(r!=1 && r!=2) 
			printf("  <Número Inválido!>\n"); 
	}while(r!=1 && r!=2);
	system("cls");	
	}while(r!=2);
	system("Pause");
	return 0;
}

