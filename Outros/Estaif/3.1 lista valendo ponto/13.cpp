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
	int c,x,n;
	double i=1,arctanx=1;
	
	printf("Informe um valor\n");
	scanf("%d",&x);
	printf("Informe um número de termos\n");
	scanf("%d",&n);
	
	if(n>0 and x>0){
		for(c=1;c<n;c++){
			i+=2;
			if(c%2==0){
				arctanx-=pow(x,i)/i;	
			}
			else if(c%2==1){
				arctanx+=pow(x,i)/i;	
			}
			
		}
		printf("O arctanx é %.3lf",arctanx);
		
	}else if(n<0 or x<0){
		printf("Informe valores positivos");
	}	
	


	return 0;
}



