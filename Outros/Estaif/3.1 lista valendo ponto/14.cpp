#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<ctype.h>


int main()
{
    setlocale(LC_ALL,"ptb");
	long int fat=1,r,n,i;
	double c,expr=1;
	
	printf("Informe um valor\n");
	scanf("%d",&r);
	printf("Informe um número de termos\n");
	scanf("%d",&n);
	
	if(n>0 and r>0){
		for(c=1;c<=n-1;c++){
			for(i=1;i<=c;i++){
				fat*=i;	
			}
			expr+=pow(r,c)/fat;
			fat=1;
		}
		printf("O expr é %.3lf",expr);
		
	}else if(n<0 or r<0){
		printf("Informe valores positivos");
	}	
	


	return 0;
}



