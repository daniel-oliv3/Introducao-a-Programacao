#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//10. Criar um algoritmo que receba as idade e o peso de 20 pessoas. Calcular e imprimir as médias dos pesos das
//pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos; de 11 a 20 anos; de 21 a 30 anos e maiores
//que 30 anos:

int main()
{
	setlocale(LC_ALL, "portuguese");
	int c, r, idade;
	float p1=0, p2=0, p3=0, p4=0, c1=0, c2=0, c3=0, c4=0, peso, med1, med2, med3, med4;
	do{
	system("color 1F");	
	system("cls");	
	printf("...........................................................\n");
	printf(" Programa que ler a idade e peso de 20 pessoas e imprime:\n médias dos pesos das pessoas da mesma faixa etária\n");
	printf("  1 a 10 anos;\n  11 a 20 anos;\n  21 a 30 anos;\n  maiores 30 anos;\n");
	printf("...........................................................\n\n");
	for(c=1; c<=20; c++){
		printf("  Digite a idade da %dº pessoa: ",c);
		scanf("%d",&idade);
		printf("  Digite o peso: ");
		scanf("%f",&peso);
		if(idade<=10){
			c1=c1+1;
			p1=peso+p1;
		}else{
			if(idade > 11 && idade <= 20){
				c2=c2+1;
				p2=peso+p2;
			}else{
				if(idade > 21 && idade <= 30){
					c3=c3+1;
					p3=peso+p3;
				}else{
					if(idade > 30){
						c4=c4+1;
						p4=peso+p4;
					}
				}
			}
		}
	
	}	
	med1=p1/c1;
    med2=p2/c2;
    med3=p3/c3;
    med4=p4/c4;
    printf("...........................................................\n");
	printf("\n  A média de peso da idade entre 1 e 10 anos: %.2f \n",med1);
    printf("  A média de peso da idade entre 11 e 20 anos: %.2f \n",med2);
    printf("  A média de peso da idade entre 21 e 30 anos: %.2f \n",med3);
    printf("  A média de peso da idade acima de 30 anos: %.2f \n\n",med4);
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

