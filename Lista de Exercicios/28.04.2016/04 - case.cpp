#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 04 criar um algoritmo que leia um valor inteiro entre 1 e 7 e imprima o dia da semana correspondente a esse número em ingles. isto é, "Sunday", se 1 "Monday", se 2, e assim por diante:


int main()
{
	setlocale(LC_ALL, "portuguese");
	int v;
	printf("Informe um valor: (entre 1 e 7)\n");
	scanf("%d",&v);
	if(v==1){
		printf("Sunday (Domingo)\n");
	}else{
		if(v==2){
			printf("Monday (Segunda-Feira)\n");
		}else{
			if(v==3){
				printf("Truesday (Terça-Feira)\n");
			}else{
				if(v==4){
					printf("Wednesday (Quarta-Feira)\n");
				}else{
					if(v==5){
						printf("Thursday (Quinta-Feira)\n");
					}else{
						if(v==6){
							printf("Friday (Sexta-Feira)\n");
						}else{
							if(v==7){
								printf("Saturday (Sábado)\n");
							}else
								printf("Número deve estar (entre 1 e 7)\n");
						}
					}
				}
			}
		}
	}
	system("Pause");
	return 0;
}

