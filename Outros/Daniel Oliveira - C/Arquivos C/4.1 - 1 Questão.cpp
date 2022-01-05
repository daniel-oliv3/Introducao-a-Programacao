#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, cont, i;
	float s;
	s=0, cont=0;
	
	printf("Informe um Valor Para N: ");
	scanf("%d", &n);
	
	if(n>0){
	      cont=n;
	      for(i=n; i>=1; i--){
		  s=s+(cont/n);
		  cont=cont-1;z
	      }
	      printf("O Valor Da Série N: %.2f \n", s);
          
	}else
	     printf("Informe Um Número Positivo:");
	
system("pause");
return(0);	
}
