#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 6. A confederação brasileira de natação irá promover eliminatórias para o próximo mundial. Fazer um
//algoritmo que receba a idade de um nadador e imprimir a sua categoria segundo os dados abaixo:
//- Infantil A  5 – 7 anos - Infantil B  8 – 10 anos
//- Juvenil A  11 – 13 anos - Juvenil B  14 – 17 anos
//- Sênior  maiores de 18 anos

int main()
{
	setlocale(LC_ALL, "portuguese");
	int i;
	printf("Informe a sua idade: \n");
	scanf("%d",&i);
	if(i < 5){
		printf("Você não tem categoria!\n");
	}else{
		if(i >= 5 && i < 8){
			printf("Sua categoria e a Infantil A!\n");
		}else{
			if(i >= 8 && i < 11){
				printf("Sua categoria e a Infantil B!\n");
			}else{
				if(i >= 11 && i < 14){
					printf("Sua categoria e Juvenil A!\n");
				}else{
					if(i >= 14 && i < 17){
						printf("Sua categoria e Juvenil B!\n");
					}else{
						if(i >= 18){
							printf("Sua categoria e a Adulto!\n");
						}
					}
				}
			}
		}
	}
	system("Pause");
	return 0;
}

