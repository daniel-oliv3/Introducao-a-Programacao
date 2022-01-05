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
	long int fat=1,x,n;
	double i=0,c=0,serie=1;
	
	printf("Informe um valor\n");
	scanf("%d",&x);
	printf("Informe um número de termos\n");
	scanf("%d",&n);
	
	if(n>0 and x>0){
		for(c=1;c<=n-1;c++){
			for(i=1;i<=c;i++){
				fat*=i;	
			}
			serie+=(double)pow(x,c)/fat;
			fat=1;
		}
		printf("A serie é %.3lf",serie);
		
	}else if(n<0 or x<0){
		printf("Informe valores positivos");
	}	
	


	return 0;
}



