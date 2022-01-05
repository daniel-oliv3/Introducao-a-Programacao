#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	float peso,altura,media,perc,cont3;
	int idade,cont,cont2,cont4;
	char s,nome[20];
	while(s!='s' && s!='n'){
	printf("Deseja Cadastrar Alguém\ns-sim\nn-não\n");
	fflush(stdin);
	scanf("%c",&s);
}
	while(s=='s'){
		printf("Digite seu nome\n");
		fflush(stdin);
		scanf("%s",&nome);
		printf("Digite sua idade");
		scanf("%d",&idade);
		printf("Digite sua aLtura");
		scanf("%f",&altura);
		printf("Digite seu peso");
		scanf("%f",&peso);
		
		cont3++;
		
		if(idade>50){
			cont++;
		}
		if(idade>10 && idade<20){
			cont2++;
			media=altura/cont2;
		}
		if(peso<45){
			cont4++;
			perc=(cont4/cont3)*100;
		}
		
		printf("Deseja continuar a Cadastrar\ns-sim\nn-não\n");
		fflush(stdin);
		scanf("%c",&s);
		
		while(s!='s' && s!='n'){
		printf("Oops Algo errado");
		printf("Deseja Cadastrar Alguém\ns-sim\nn-não\n");
		fflush(stdin);
		scanf("%c",&s);
	}
	printf("Todos que são maiores de 50 é %d",cont);
	printf("A média das alturas é %.2f",media);
	printf("A porcentagem dos com peso inferior a 45 kilos é %d",perc);
	
}

}
