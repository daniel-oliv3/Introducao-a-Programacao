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

	int c,n;
	float x=0,s=0;
	
	printf("Informe o valor de N:");
	scanf("%d",&n);
	

	
	if(n>0){

	x=n;
		for(c=n;c>=1;c--){
			s+=c/x;
		}
		printf("%.2f",s);
	
	}else{
		printf("Informe valores positivos\n");
	}
	
	return 0;
}



