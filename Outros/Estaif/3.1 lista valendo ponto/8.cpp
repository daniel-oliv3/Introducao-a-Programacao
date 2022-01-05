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
	int y,n;
	double c=0,s=0,j=0;
	
	printf("Informe um valor\n");
	scanf("%d",&y);
	printf("Informe um número de termos\n");
	scanf("%d",&n);
	
	for(c=1;c<n;c++){
		j+=2;
		s+=pow(y,j)/j;
	}
	printf("%.3lf",s+1);
	return 0;
}



