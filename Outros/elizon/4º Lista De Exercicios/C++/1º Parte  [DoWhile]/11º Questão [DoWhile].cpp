#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"ptb");
	
	int cand,cont1=0,cont2=0,cont3=0,cont4=0,cont5=0,cont6=0;
	float cont=0,perc=0;
	
	printf("\n Qual A Sua opcao De Voto:  ");
	scanf("%d",&cand);
	printf("\n Obrigado Por Votar.....");
	printf("\n");
	
	do
	{
		cont++;
		if(cand==1)
		{
			cont1++;
		}
		else if(cand==2)
		{
			cont2++;
		}
		else if(cand==3)
		{
			cont3++;
		}
		else if(cand==4)
		{
			cont4++;
		}
		else if(cand==5)
		{
			cont5++;
		}
		else if(cand==6)
		{
			cont6++;
		}
		perc=((cont5+cont6)/cont)*100;
		
			printf("\n Qual A Sua opcao De Voto:  ");
			scanf("%d",&cand);
			printf("\n Obrigado Por Votar.....");
			printf("\n");
		
		while(cand!=1 && cand!=2 && cand!=3 && cand!=4 && cand!=5 && cand!=6 && cand!=7)
		{
			printf("\n Seu Candidato Não Existe.... \n Tente Votar Novamente.....\n");
			printf("\n Qual A Opção De Seu Voto: ");
			scanf("%d",&cand);
			printf("\n Obrigado Por Votar.....");
			printf("\n");
		}
	}
	while(cand!=7);
	
	printf("\n O Candidato 1 Teve %d Votos: ",cont1);
	printf("\n");
	printf("\n O Candidato 2 Teve %d Votos: ",cont2);
	printf("\n");
	printf("\n O Candidato 3 Teve %d Votos: ",cont3);
	printf("\n");
	printf("\n O Candidato 4 Teve %d Votos: ",cont4);
	printf("\n");
	printf("\n Os Votos Brancos São %d Votos: ",cont5);
	printf("\n");
	printf("\n Os Votos Nulos São %d Votos: ",cont6);
	printf("\n");
	printf("\n O Percentual De Brancos E Nulos São: %.2f%%",perc);
	
	getch();
	return 0;
}
