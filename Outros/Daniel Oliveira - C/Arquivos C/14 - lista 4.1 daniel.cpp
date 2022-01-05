#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<windows.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int op, n, k, pot=1,  e, ant1=0, ant2=1, fat;
	
	printf("\n");
	printf("..........................................................................\n\n");
	printf("\t\t  # PROGRAMA MATEMÁTICA LEGAL #");
	printf("\n\n");
	printf("\t\t\t Menu de Opções:");
	printf("\n\n");
	do{
		printf("[1] Calcular Fatorial.\n");
		printf("[2] Calcular Potencia.\n");
		printf("[3] Calcular Fibonacci.\n");
		printf("[0] Encerrar o Programa.\n");
		printf("\n");
		printf("Informe a Opção: ");
		scanf("%d",&op);
		printf("\n");
		
		if(op>0 && op<4){
			printf("");
			printf("Informe Um Valor: ");
			scanf("%d", &n);
			printf("\n");
			
			switch(op){
				
				case 1:
				    fat=1;
				    for(k=1; k<=n; k++){
				  	    fat=fat*k;
				    }
				     printf("Fatorial de N: %d \n\n",fat);
				     break;
				
				case 2:
					printf("Informe o Expoente: %d\n\n");
					scanf("%d",&e);
					for(k=1; k<=e; k++){
						pot=pot*n;
					}
				      printf("A Potencia %c: %d \n\n",130,pot);
				      break;
				case 3:
				    for(k=0; k<n; k++){
				    	printf("%d \n\n",ant1+ant2);
				    	ant1=ant2;
                          ant2=ant1+ant2;
				    	         
				    }            
				    
				      break;
			
			}
		
		}else if(op!=0)
		printf("\n\n Opção Invalida! \n\n");
		else
		printf("\n\t\t\tEncerrar o Programa! \n");
	    }
	    while(op!=0);
	
	    printf("\n\n");
    	printf("..........................................................................\n\n");
	    printf("\t\t\t\t\t\t Autor: Daniel Souza.");
	    printf("\n");
	    printf("..........................................................................\n\n");
	
system("pause");
return(0);	
}
