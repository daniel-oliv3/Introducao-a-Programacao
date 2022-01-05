#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int ant=1,acum=0,res=0,cont=1;
	
	do{
		res=ant+acum;
		ant=acum;
		acum=res;
		printf("A %d da serie fibonacci é %d\n",cont,res);
		cont++;
	}while(cont<=20);
		
					getch();
					return(0);
}
