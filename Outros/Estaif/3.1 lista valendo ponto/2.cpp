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
	
	char op;
	int c,n;
	
	printf("Informe um simbolo \n+\n-\n*\n/\n");
	scanf("%c",&op);
	printf("Informe um valor\n");
	scanf("%d",&n);
	
	switch (op){
		case '+':for(c=1;c<=10;c++){ 
					printf("%d + %d = %d\n",c,n,c+n);				
				}break;
		case '-':for(c=n;c<=n+9;c++){ 
				printf("%d - %d = %d\n",n,c,c-n);				
				}break;
		case '*':for(c=1;c<=10;c++){ 
				printf("%d * %d = %d\n",c,n,c*n);				
				}break;
		case '/':for(c=n;c<=n*10;c+=n){ 
				printf("%d / %d = %d\n",c,n,c/n);				
				}break;
		default:printf("Informe um simbolo valido");break;		
	}
	return 0;
	
}



