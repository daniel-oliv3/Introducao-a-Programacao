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
	float s=1;
	int nfat,opi,f=0,ntermos=0,con=0,a1=0,a2=1,a3=0,base,expo,p=0;
	long int fat=1;
	printf("[1] Calcular Fatorial\n[2] Calcular Potencia\n[3] Calcular Fibonacci\n[0] Encerrar o Programa\n");
	scanf("%d",&opi);
	
	if(opi==3){
		printf("Informe um número de termos\n");
		scanf("%d",&ntermos);
		if(ntermos>0){
			if(ntermos==1){
				printf("%d,",a1);
			}
			else if(ntermos==2){
				printf("%d,%d,",a1,a2);
			}
			else if(ntermos>2){
				printf("%d,%d,",a1,a2);
				
				while(con!=ntermos-2){
					con++;
					a3+=a2+a1;
					printf("%d,",a3);
					a1=a2;
					a2=a3;
				}
			}			
		}
		else if(ntermos<0){
			printf("Informe valores positivos\n");
		}
	
	}
	else if(opi==1){
		printf("Informe um valor\n");
		scanf("%d",&nfat);
	
		if(nfat>0){
			for(f=1;f<=nfat;f++){
				fat*=f;
			}
			printf("O fatorial é %d\n",fat);
		}else{
			printf("Informe valores positivos\n");
		}
	}
	else if(opi==2){
		printf("Informe um valor para a base\n");
		scanf("%d",&base);
		printf("Informe um valor para o expoente\n");
		scanf("%d",&expo);
		
		for(p=1;p<=expo;p++){
			s*=base;
		}
		
		printf("A potencia é %.f\n",s);
		
		
	}
	else if(opi==0){
		printf("Você encerrou o programa\n");
	}
	else{
		printf("Informe valores da tabela\n");
	}
	return 0;
}



