#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int n, op, cont;
	
	printf("Informe Um Valor: ");
	scanf("%d",&n);
	printf("Informe O Operador\n");
	printf("[1] - Soma: [2] - Subtra��o: [3] - Multiplica��o: [4] - Divis�o: ");
	scanf("%d", &op);
	if(n>0){
		   switch(op){
		   	     case 1:
		   	     for(cont=1;cont<=10;cont++){
		   	     	printf("%d + %d = %d \t\t\t \n",n,cont,n+cont);
					}	
		   	     	break;
		   	     case 2:
				 for(cont=1;cont<=10;cont++){
				 	printf("%d - %d = %d \t\t\t \n",n,cont,n-cont);
					}		
		   	        break;
		   	      case 3:
				  for(cont=1;cont<=10;cont++){
				  	printf("%d * %d = %d \t\t\t \n",n,cont,n*cont);
				    }
				    break;
				  case 4:
				  for(cont=1;cont<=10;cont++){
				  	printf("%d / %d = %d\t\t\t \n",n,cont,n/cont);
				    }  
				   	break;
					default:
						printf("Operador Invalido");
		   		        }
			   	   }else{
	                    printf("Informe um N�mero Positivo: ");		   	   	
		                }	   	   
			   	   	
  	            
		   	
		   	
		   	
system("pause");
return(0);		   	
		   	
		   	
    }
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   
