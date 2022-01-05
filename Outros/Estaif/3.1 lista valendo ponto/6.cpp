
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

	int n,c=0;
	float s=1;
	printf("Informe um valor\n");
	scanf("%d",&n);
	
	if(n>0){
		do{
		 	c++;	
			if(c%2==0){
				s-=(float)(c/pow(c,2));
			}
			else if(c%2==1){
				s+=(float)(c/pow(c,2));
			}
		}while(c<n);
		printf("Somatória é: %.2f",s);
			
		
		
	}else{
		printf("Informe valores positivos\n");
	}
	


	return 0;
}



