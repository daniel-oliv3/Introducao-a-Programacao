#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"portuguese");
	
	int nt, i;
	float s;
		
	printf("\n");
	printf("........................................\n\n");
	printf("Digite um Valor: ");
	scanf("%d",&nt);
	
	if(nt>0){
		for(i=nt; i>=1; i--){
			s=s+(i/nt);
		}
		printf("O Valor de S: %.2f \n",s);
	}else{
	printf("Informe Um Número Positivo: ");	
	}

	printf("\n");
	printf("........................................\n\n");
	printf("\t\t Autor: Daniel Souza.");
	printf("\n");
	printf("........................................\n\n");
	
system("pause");
return(0);
	
}
