#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//11. Em uma eleição presidencial, existem quatro candidatos. Os votos são informados através de códigos, que são: 1, 2,
//3 e 4 – voto para os respectivos candidatos; 5 – voto nulo; 6 – voto em branco; Elaborar um algoritmo que calcule e
//imprima: total de votos para cada candidato; total de votos nulos; total de votos em branco; percentual dos votos
//nulos e brancos sobre o total. Como finalizador do conjunto de votos têm-se o valor 7:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int cand,  cont1=0, cont2=0, cont3=0, cont4=0, cont5=0, cont6=0; 
	float cont=0, perc=0;
	system("color 1F");
	printf(" Eleições 2016\n");
	printf(" Lista de Canditados:\n\n  [1] - Dilma Rousseff\n  [2] - Aécio Neves\n  [3] - Marina Silva\n  [4] - Luiz Inácio Lula da Silva\n\n");
	printf("  [5] - Voto Nulo\n  [6] - Voto em Barnco\n  [7] - Sair\n\n");
	do{
		printf("\n  Digite o número do canditado: ");
		scanf("%d",&cand);
		cont++;
		if(cand==1){
			cont1++;
			printf("  Voto realizado com sucesso!\n");
		}else{
			if(cand==2){
				cont2++;
				printf("  Voto realizado com sucesso!\n");
			}else{
				if(cand==3){
					cont3++;
					printf("  Voto realizado com sucesso!\n");
				}else{
					if(cand==4){
						cont4++;
						printf("  Voto realizado com sucesso!\n");
					}else{
						if(cand==5){
							cont5++;
							printf("  Voto realizado com sucesso!\n");
						}else{
							if(cand==6){
								cont6++;
								printf("  Voto realizado com sucesso!\n");
							}
						}
					}
				}
			}
		}
		perc=((cont5+cont6)/cont)*100;
		while(cand!=1 && cand!=2 &&cand!=3 &&cand!=4 &&cand!=5 && cand!=6 && cand!=7){
			printf("  Voto inválido!\n\n\a");
			printf(" Lista de Canditados:\n\n  [1] - Dilma Rousseff\n  [2] - Aécio Neves\n  [3] - Marina Silva\n  [4] - Luiz Inácio Lula da Silva\n\n");
			printf("  [5] - Voto Nulo\n  [6] - Voto em Barnco\n  [7] - Sair\n\n");
			printf("  Digite o número do canditado: ");
			scanf("%d",&cand);
			printf("\n");
		}
	}while(cand!=7);
	printf("  Resultado das eleição presidencial:\n\n  %d%% Votos: - Dilma Rousseff \n",cont1);
	printf("  %d%% Votos:  - Aécio Neves\n  %d%% Votos:  - Marina Silva\n  %d%% Votos:  - Luiz Inácio Lula da Silva\n",cont2,cont3,cont4,cont5,cont6);
	printf("  Percentual de votos brancos e nulos: %.2f\n\n",perc);
	system("Pause");
	return 0;
}


