#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

//14 - Construa um algoritmo que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a
//seguir, o novo preço e a classificação

int main()
{
	setlocale(LC_ALL, "portuguese");
	float p, np; 
	printf("Informe o preço do produto: \n");
	scanf("%f",&p);
	if(p <= 50){
		np = p*0.05; 
	}else{
		if(p > 50 && p < 100){
			np = p*0.10;
		}else{
			if(p > 100){
				np = p*0.15;
			}
		}if(np <= 80){
			printf("Barato!\n");
		}else{
			if(np > 80 && np < 120){
				printf("Normal!\n");
			}else{
				if(np > 120 && np < 200){
					printf("Caro!\n");
				}else{
					if(np > 200){
						printf("Muito Caro!\n");
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}
		 
	
		
