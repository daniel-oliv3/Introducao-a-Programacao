#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 4. Ler um número inteiro entre 1 e 12 e escrever o mês correspondente. Caso o usuário digite um número fora
//desse intervalo, deverá aparecer uma mensagem informando que não existe mês com este número:
//(Resolver com Se’s Aninhados e também com Múltipla Escolha).

int main()
{
	setlocale(LC_ALL, "portuguese");
	int op;
	printf("Informe um número (entre 1 e 12)\n");
	scanf("%d",&op);
	if(op == 1){
		printf("Janeiro\n");
	}else{
		if(op == 2){
			printf("Fevereiro\n");
		}else{
			if(op == 3){
				printf("Março\n");
			}else{
				if(op == 4){
					printf("Abril\n");
				}else{
					if(op == 5){
						printf("Maio\n");
					}else{
						if(op == 6){
							printf("Junho\n");
						}else{
							if(op == 7){
								printf("Julho\n");
							}else{
								if(op == 8){
									printf("Agosto\n");
								}else{
									if(op == 9){
										printf("Setembro\n");
									}else{
										if(op == 10){
											printf("Outubro\n");
										}else{
											if(op == 11){
												printf("Novembro\n");
											}else{
												if(op == 12){
													printf("Dezembro\n");
												}else
													printf("Não existe mês com este número!\nO Número tem que estar entre 1 e 12\n");
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	system("Pause");
	return 0;
}

