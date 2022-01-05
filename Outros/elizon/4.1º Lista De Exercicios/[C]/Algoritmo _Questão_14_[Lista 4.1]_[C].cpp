#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

int main()
{	
	int op, n, k, pot=1, b,i=1, E, a=1,fb=0,res=0,fat;
	
	do
	{
		printf("\n\n");
		printf("\n PROGRAMA MATEMATICA LEGAL...");
		printf("\n");
		printf("\n MENU DE OPCOES:");
		printf("\n");
		printf("\n [[ 1 ]]  ====>>>>  Calcular Fatorial....");
		printf("\n [[ 2 ]]  ====>>>>  Calcular Potencia....");
		printf("\n [[ 3 ]]  ====>>>>  Calcular Fibonacci...");
		printf("\n [[ 0 ]]  ====>>>>  Encerrrar O Programa...");
		printf("\n");
		printf("\n\n Informe Sua Opcao: ");
		scanf("%d",&op);
		system("cls");
		
		if(op>0 && op<4)
		{
		    switch(op)
			{
		        case 1:
		        	printf("\n [[ 1 ]]  ====>>>>  Calcular Fatorial....");
		        	printf("\n");
		        	printf("\n Informe um valor: ");
					scanf("%d",&n);
					
		             fat=1;
		             for(k=1; k<=n;k++)
			 		  {
		              	fat=fat*k;
		              }
		              printf("\n fatorial de %d Sera: %d ",n,fat);
		              printf("\n\n");
		              system("pause");
		              system("cls");
		              break;      
		        case 2:
		        	 printf("\n [[ 2 ]]  ====>>>>  Calcular Potencia....");
		        	 printf("\n");
		             printf("\n Informe O Expoente: ");
		             scanf("%d",&E);
		             
		             for(k=1; k<=E; k++)
					 {
		                pot=pot*E;
		             }
		             printf("\n A Potencia Sera : %d ",pot);
		             printf("\n\n");
		             system("pause");
		             system("cls");
		             break;
		        case 3:
		        	printf("\n [[ 3 ]]  ====>>>>  Calcular Fibonacci...");
		        	printf("\n");
		        	printf("\n Informe um valor: ");
					scanf("%d",&n);
					
		             while(i>0 && i<=n)
					{
						res=a+fb;
						a=fb;
						fb=res;
						printf(" - %d ",res);
						//printf("A %d da serie de Fibonacci e: %d ",i,res);
						i++;
					}
					printf("\n\n");
					system("pause");
		            system("cls");
		             break;
		    }
		}
		else if(op!=0)
		{
			printf("\n Opcao invalida!!!...");
		}
		else
		{
			printf("\n [[ 0 ]]  ====>>>>  Encerrrar O Programa...");
			printf("\n\n");
			printf("\n Programa Encerrado!!!!");
			printf("\n\n");
		}
	}
	while(op!=0);
	
	getch();
	return(0);
}
