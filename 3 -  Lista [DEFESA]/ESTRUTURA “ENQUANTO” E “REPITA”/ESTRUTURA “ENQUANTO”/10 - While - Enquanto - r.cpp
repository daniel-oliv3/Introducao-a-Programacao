#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

//10. Criar um algoritmo que receba a idade, a altura e o peso de várias pessoas. Calcule e imprima: a quantidade de
//pessoas com idade acima de 50 anos; a média das alturas das pessoas com idade entre 10 e 20 anos; a
//porcentagem de pessoas com peso inferior a 45 quilos entre todas informadas:

int main()
{
	setlocale(LC_ALL, "portuguese");
	char s;
	int  idade, cont1=0, cont2=0; 
	float peso, m, altura, cont3=0;
	printf("..............................................................\n");
	printf(" Programa que ler a idade, altura e peso de várias pessoas:\n - imprime a quantidade de pessoas com idade acima de 50 anos\n");
	printf(" a média das alturas das pessoas com idade entre 10 e 20 anos\n porcentagem de pessoas com peso inferior a 45 quilos\n");
	printf("..............................................................\n\n");
	system("color 1F");
	while(s!='n'){
		printf("\n\n Digite a sua idade: ");
		scanf("%d",&idade);
		printf(" Digite a sua altura: ");
		scanf("%f",&altura);	
		printf(" Digite o seu peso: ");
		scanf("%f",&peso);	
		printf("\n.....................\n");
		printf("\n  Deseja continuar ?\n   <s/n> :");
		scanf("%s",&s);
		printf("\n");
		system("cls");
		if(idade>50){
			cont1++;
		}else{
			if(idade>=10 && idade<=20){
					cont2++;
					m+=altura;
			}else{
				if(peso<45){
					cont3++;
				}
			}
		}
	}
	printf("\n  Quantidade de pessoas com idade acima de 50 anos: %d\n",cont1);
	printf("  A média das alturas das pessoas com idade entre 10 e 20 anos: %d\n",cont2);
	printf("  porcentagem de pessoas com peso inferior a 45 quilos: %.2f\n",(cont3*100)/cont3); // ??
	system("Pause");
	return 0;
}

