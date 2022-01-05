
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
	long int c,fat=1,j,x,n;
	double i=1,senx=1;
	
	printf("Informe um valor\n");
	scanf("%d",&x);
	printf("Informe um número de termos\n");
	scanf("%d",&n);
	
	if(n>0 and x>0){
		for(c=2;c<=n;c++){
			i+=2;
			for(j=1;j<=i;j++){
				fat*=j;		
			}
			if(c%2==0){
				senx-=pow(x,i)/fat;	
			}
			else if(c%2==1){
				senx+=pow(x,i)/fat;	
			}
	
			fat=1;
		}
		printf("O senX é %.3lf",senx);
				
		
	}else if(n<0 or x<0){
		printf("Informe valores positivos");
	}	
	


	return 0;
}



