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
	int x,n;
	long int fat=1;
	double c3=2,c2,c1,cosh=1;
	
	printf("Informe um valor\n");
	scanf("%d",&x);
	printf("Informe um número de termos\n");
	scanf("%d",&n);
	
	if(n>0 and x>0){
		for(c1=1;c1<n;c1++){
			for(c2=1;c2<=c3;c2++){
				fat*=c2;
			}
			cosh+=pow(x,c3)/fat;
			fat=1;
			c3+=2;
		}
		printf("O cosh é %.3lf",cosh);
		
	}else if(n<0 or x<0){
		printf("Informe valores positivos");
	}	
	


	return 0;
}



