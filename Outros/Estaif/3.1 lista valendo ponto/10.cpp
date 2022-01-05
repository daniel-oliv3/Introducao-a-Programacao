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

	int n,r;
	float c=0,s=1;
	
	printf("Informe um valor\n");
	scanf("%d",&r);
	printf("Informe um número de termos\n");
	scanf("%d",&n);
	
	for(c=1;c<=n;c++){
		s+=(pow(r,c))/c;
	}
	printf("A somatoria é %.2f\n",s);
	
	

	return 0;
}



