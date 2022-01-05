#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int cand,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;
	float cont=0,perc=0;
	
	printf("Qual a opção de seu voto\n");
	scanf("%d",&cand);
	printf("Obrigado por votar\n");
	
	while(cand!=7){
		
		cont++;
		if(cand==1){
			cont1++;
		}else if(cand==2){
			cont2++;
		}else if(cand==3){
			cont3++;
		}else if(cand==4){
			cont4++;
		}else if(cand==5){
			cont5++;
		}else if(cand==6){
			cont6++;
		}
		perc=((cont5+cont6)/cont)*100;
		
		printf("Qual a opção de seu voto\n");
		scanf("%d",&cand);
		printf("Obrigado por votar\n");
		
		while(cand!=1 && cand!=2 && cand!=3 && cand!=4 && cand!=5 && cand!=6 && cand!=7){
			printf("Oops seu candidato não existe\nTente votar novamente\n");
			printf("Qual a opção de seu voto\n");
			scanf("%d",&cand);
			printf("Obrigado por votar");
			
		}
	
	}
	printf("O candidato 1 teve %d votos\n",cont1);
	printf("O candidato 2 teve %d votos\n",cont2);
	printf("O candidato 3 teve %d votos\n",cont3);
	printf("O candidato 4 teve %d votos\n",cont4);
	printf("Os votos brancos são %d votos\n",cont5);
	printf("Os votos nulos são %d votos\n",cont6);
	printf("O percentual de brancos e nulos são %.2f%%",perc);
}
