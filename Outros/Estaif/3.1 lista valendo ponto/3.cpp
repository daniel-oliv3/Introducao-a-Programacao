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

	
	float s=0,c,decima=1,n,debaixo=1;
	
	printf("Informe um valor\n");
	scanf("%f",&n);
	
	if(n>0){
		for(c=1;c<n;c++){
			debaixo++;
			decima+=2;
			s+=(float)decima/debaixo;
		}	
		
		printf("Somatorio é:%.2f",s+1);
		
	}else{
		printf("Informe valores positivos\n");
	}
	
	return 0;
}




