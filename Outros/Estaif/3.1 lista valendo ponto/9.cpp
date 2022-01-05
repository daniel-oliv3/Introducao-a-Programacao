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

	int s=0,n,c=0;
	
	printf("Informe um valor\n");
	scanf("%d",&n);
	
	if(n>0){
		for(c=1;c<=n;c++){
			
			if(c%2==0){
				s-=1.0/pow(1,3);
			}
			else if(c%2==1){
				s+=1.0/pow(1,3);	
			}	
		
		}		
		printf("A somatoria é :%d",s);
		
	}else{
		printf("Informe valores positivos\n");
	}
	



	return 0;
}



