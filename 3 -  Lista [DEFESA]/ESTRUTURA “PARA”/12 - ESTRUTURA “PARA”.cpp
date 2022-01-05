#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


//12. No dia da estreia do filme “Senhor dos Anéis”, uma grande emissora de TV realizou uma pesquisa logo após o
//encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e sua opinião em
//relação ao filme: 3 – excelente; 2 – bom; 1 – regular; Criar um algoritmo que receba a idade e a opinião de 20
//espectadores calcule e imprima: a média das idades das pessoas que responderam excelente; a quantidade de
//pessoas que responderam regular; a percentagem de pessoas que responderam bom entre todos os espectadores:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int r, idade, op, i, opexc=0, opbom=0, opregular=0, idadegot=0;
	do{
	system("color 1F");	
	system("cls");
	printf(".......................................................\n");	
	printf(" Programa Pesquisa de opnião, Filme: “Senhor dos Anéis”\n");
	printf(".......................................................\n\n");		
	for(i=1;i<=20;i++){
		printf("  %dº Espectador\n",i);
		printf("  Digite a idade: ");
		scanf("%d",&idade);
		printf("  Informe a sua opinião sobre o filme: Senhor dos Anéis\n");
		printf("  [1] - Regular\n  [2] - Bom\n  [3] - Excelente\n");
		printf("  Opinião: ");
		scanf("%d",&op);
		printf("\n");
		if(op==1){
			opregular++;
		}else{
			if(op==2){
				opbom++;
			}else{
				if(op==3){
					opexc++;
					idadegot=idadegot+idade;
				}
			}
		}
	}
	if(opexc!=0){
		printf("  Média de idade das pessoas que responderam excelente: %d\n",idadegot/opexc);
	}else{
		printf("  Ninguém que tenha escolhido excelente\n");
	}if(opregular!=0){
		printf("  Quantidade de pessoas que respoderam regular: %d\n",opregular);
	}else{
		printf("  Ninguém que tenha escolhido regular\n");
	}if(opbom!=0){
		printf("  A porcentagem das pessoas que respondeu bom: %d\n",opbom*100/20);
	}else{
		printf("  Ninguém que esnha escolhido bom\n");
	}
	do{
		printf("\n1- Nova Execução\n");  
		printf("2- Sair\n"); 
		scanf("%d",&r); 
		if(r!=1 && r!=2) 
			printf("  <Número Inválido!>\n\a"); 
	}while(r!=1 && r!=2);
	system("cls");	
	}while(r!=2);
	system("Pause");
	return 0;
}

