#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int nt, r, fat, i, cont, k;
	float s;
	
	s=0; cont=1;
	printf("\n");
	printf("............................................\n\n");
	printf("Digite Um Valor Para NT:  ");
	scanf("%d", &nt);
	printf("Digite Um Valor Para R:  ");
	scanf("%d", &r);
	if(nt>0 && r>0){
		for(i=1; i<=nt-1; i++){
			fat=1;
			for(k=1; k<=1; k++){
				fat=fat*k;
			}
			s=s+(pow(r,cont))/fat;
			cont++;
		}
		    printf("O Resultado é: %.2f \n",s+1);
          }else{
          	 printf("Valor Invalido!");
		  }
    printf("\n");
	printf("............................................\n\n");
	printf("\t\t Autor: Daniel Souza.");
	printf("\n");
	printf("............................................\n\n");
    printf("\n\n");
system("pause");
return(0);

}
