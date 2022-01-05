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
	
	int idade=1;
	float acm1=0,altura=1,peso=1,media=0,por=0,ct=0,c1=0,c2=0,c3=0;;
	
	while(peso>0 and altura>0 and idade>0){
		ct++;
		printf("\n%.f pessoa\n",ct);
		printf("Informe sua altura\n");
		scanf("%f",&altura);
		printf("Informe seu peso\n");
		scanf("%f",&peso);
		printf("Informe sua idade\n");
		scanf("%d",&idade);
		
		if(peso<0 or altura<0 or idade<0){
			peso=-1;
			altura=-1;
			idade=-1;	
			break;			
		}
		
		if(idade>50){
			c1++;
		}
		if(idade>10 and idade<=20){
			acm1=acm1+altura;
			c2++;
		}
		if(peso>0 and peso<40.0 and peso!=0){
			c3++;
		}
	}
	printf("A quantidade de pessoas com idade superior a 50 anos %.f\n",c1);

	media=acm1/c2;
	por=(c3/(ct-1))*100;
	
	if(acm1>0){
		printf("media é: %.2f\n",media);
	}
	if(c3>0){
		printf("porcentagem é: %.f%%\n",por);
	}	
	
	return 0;
}



