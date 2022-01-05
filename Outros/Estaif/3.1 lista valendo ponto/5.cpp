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
	
	int x,y,z=0,c=0;

	printf("Informe dois valores\n");
	scanf("%d %d",&x,&y);
	
	printf("%d,%d,",x,y);
	
	for(c=3;c<=10;c++){
		
		if(c%2==0){
			z=y-x;
		}
		else{
			z=x+y;
		}
		printf("%d,",z);
		x=y;
		y=z;
	}
	
	return 0;
}



