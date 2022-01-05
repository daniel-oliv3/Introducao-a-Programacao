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
	float j=1,s=0;
	printf("Informe um valor\n");
	scanf("%d",&n);
	
	if(n>0){
		for(c=1;c<=n;c++){
			
			if(c%2==1){
				s=s+(4.0/j);
			}
			else if(c%2==0){
				s=s-(4.0/j);
			}	
		j+=2;
		}		
		printf("A somatoria é :%.2f",s);
		
	}else{
		printf("Informe valores positivos\n");
	}
	



	return 0;
}



