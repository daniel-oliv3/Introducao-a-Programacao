#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<locale.>


		  int main() {

		  setlocale(LC_ALL, "Portuguese");
		  
		 int num=1, menor=100000000, maior=0,media=0,cont=0;
		 
		 while(num!=0){
		 	printf("\n Digite um número ");
		 	scanf("%d",&num);
		 	if(num<0){
		 		media=num+num;
		 		if(num>maior){
		 			maior=num;
		 			
		 		} if(num<menor){
		 			menor=num;
		 			cont++;
		 		}else{
		 		printf("\nValor inválido\n");
		 	}
		 	
		 }
	}         
	            printf("\nMenor: %d\n",menor);
	            printf("\nMaior: %d\n",maior);
	            printf("A media dos números é: %f\n",(float)media/cont);
		  system("pause");
		  return(0);
		  }

