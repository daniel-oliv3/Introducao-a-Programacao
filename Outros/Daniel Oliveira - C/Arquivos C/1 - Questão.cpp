//*faça um programa que leia um numero de termos da serie N, e determine o valor de S, sendo*//

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, i;
	float s;
		
	s=0;
	
	printf("Digite Um Valor: ");
	scanf("%d",&n);
	
	if(n>0){
		for(i=n; i>=1; i--){
			s=s+(i/n);
			
	}
			printf("O valor de S = %.2f \n",s);
		}else
		  printf("Informe um Valor Positivo: ");

		

	
system("pause");
return(0);

}
