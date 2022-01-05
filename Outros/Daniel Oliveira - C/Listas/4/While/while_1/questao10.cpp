#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		   int idade,cont,cont2,cont3,tt;
		  cont=0;
		  cont2=0;
		  cont3=0;
		  tt=0;
		  float altura,peso,m;
		  m=0;
		  char resp='S';
		  
		  while(resp=='S'){
		  	printf("Digite sua idade:");
		  	scanf("%d",&idade);
		  	printf("Digite sua altura");
		  	scanf("%f",&altura);
		  	printf("Digite seu peso");
		  	fflush(stdin);
		  	scanf("%f",&peso);
		  	tt++;
		  	if(idade>50){
		  		cont++;
		  		
		  	} if(idade>10 && idade<20){
		  		m+=altura;
		  		cont2++;
		  	}if(peso<45){
		  		cont3++;
		  	}
		  	printf("\nDeseja repetir?\n");
		  	printf("\nDigite [S] para continuar, outra tecla para sair");
		  	fflush(stdin);
		  	scanf("%c",&resp);
		  	resp=toupper(resp);
		  	system("cls");
		  }
		  printf("\nA quantidade de pessoas com idade superior a 50 anos é:%d\n",cont);
		  printf("\nA média das alturas das pessoas entre 10 e 20 anos é:%f\n",m/cont2);
		  printf("\nA porcentagem das pessoas com peso inferior a 45kg é:%f\n",100*cont3/tt);



		  system("pause");
		  return(0);
		  }

