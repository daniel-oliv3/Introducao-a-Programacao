#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	float peso,altura,acum,media,perc=0,cont3=0;
	int idade,cont=0,cont2=0,cont4=0;
	char s,nome[20];
	
	

	do{
		
		printf("Digite seu nome\n");
		fflush(stdin);
		scanf("%s",&nome);
		printf("Digite sua idade\n");
		scanf("%d",&idade);
		printf("Digite sua aLtura\n");
		scanf("%f",&altura);
		printf("Digite seu peso\n");
		scanf("%f",&peso);
		
		cont3++;
		
		if(idade>50){
			cont++;
		}
		if(idade>10 && idade<20){
			cont2++;
			acum=acum+altura;
			media=acum/cont2;
		}
		if(peso<45){
			cont4++;
			perc=(cont4/cont3)*100;
		}
		
		
		do{
		
		printf("Deseja Cadastrar Alguém\ns-sim\nn-não\n");
		fflush(stdin);
		scanf("%c",&s);
		if(s!='s' && s!='n'){
		printf("Oops Algo errado\n");
		}
		}while(s!='s' && s!='n');
	
	
}while(s=='s');

	printf("Todos que são maiores de 50 é %d\n",cont);
	printf("A média das alturas é %.2f\n",media);
	printf("A porcentagem dos com peso inferior a 45 kilos é %.2f%%\n",perc);
}
