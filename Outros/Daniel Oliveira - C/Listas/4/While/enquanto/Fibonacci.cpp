#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"ptb");
	
	int ant=1,acum=0,res=0,cont=1;
	
	while(cont<=20){
		res=ant+acum;
		ant=acum;
		acum=res;
		printf("A %d da serie fibonacci é %d\n",cont,res);
		cont++;
	}
		
					getch();
					return(0);
}
