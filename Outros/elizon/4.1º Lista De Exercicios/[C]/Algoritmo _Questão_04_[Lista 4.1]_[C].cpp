#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>

int main() 
{
	  int idade,cont,cont2,cont3,tt;
	  tt=0;
	  cont=0;
	  cont2=0;
	  cont3=0;
	  float altura,peso,m;
	  char resp='S';
  
  while(resp=='S')
  {
  	printf("\n Informe A Sua Idade: ");
  	scanf("%d",&idade);
  	printf("\n Informe A Sua Altura: ");
  	fflush(stdin);
  	scanf("%f",&altura);
  	printf("\n Informe Seu Peso: ");
  	fflush(stdin);
  	scanf("%f",&peso);
  	tt++;
  	
  	if(idade>50)
	{
  		cont++;
  	}
	else if(idade>10 && idade<20)
	{
  		m+=altura;
  		cont2++;
  	}
	  else if(peso<40)
	{
  		cont3++;
  	}
  	printf("\n Voce Deseja Repetir O Processo ?...");
  	printf("\n");
  	printf("\n Tecle [[ S ]] Para Efetuar O Processo Novamente ,ou, Tecle qualquer outra tecla, Pois Ira Sair...:  ");
  	fflush(stdin);
  	scanf("%c",&resp);
  	resp=toupper(resp);
  	system("cls");
  }
  printf("\n A Quantidade De Pessoas Com A Idade Superior A 50 Anos Sera : %d ",cont);
  printf("\n");
  printf("\n A Média Das Alturas Das Pessoas Entre 10 E 20 Anos Sera : %.2f ",m/cont2);
  printf("\n");
  printf("\n A Porcentagem Das Pessoas Com Peso Inferior A 40kg Sera : %.2f ",(cont3/tt)*100);
  printf("\n");
  
  getch();
  return(0);
  }

