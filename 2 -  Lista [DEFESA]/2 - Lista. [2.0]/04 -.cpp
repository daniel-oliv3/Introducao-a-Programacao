#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// 4. Ler um n�mero inteiro entre 1 e 12 e escrever o m�s correspondente. Caso o usu�rio digite um n�mero fora
//desse intervalo, dever� aparecer uma mensagem informando que n�o existe m�s com este n�mero:
//(Resolver com Se�s Aninhados e tamb�m com M�ltipla Escolha).

int main()
{
	setlocale(LC_ALL, "portuguese");
	int op;
	printf("Informe um n�mero (entre 1 e 12)\n");
	scanf("%d",&op);
	if(op == 1){
		printf("Janeiro\n");
	}else{
		if(op == 2){
			printf("Fevereiro\n");
		}else{
			if(op == 3){
				printf("Mar�o\n");
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
													printf("N�o existe m�s com este n�mero!\nO N�mero tem que estar entre 1 e 12\n");
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

