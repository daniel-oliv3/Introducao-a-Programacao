#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int X,Y,Z;
    printf("Informe 3 valores:\n");
    scanf("%d%d%d", &X,&Y,&Z);
    if(X < Y+Z || Y<X+Y || Z<Y+Z){
    	printf("Triangulo: ");
    	if(X==Y&&Y==Z)
    		printf("Equilátero");
    	else if(X==Y || X==Z || Y==Z)
    		printf("Isóceles");
    	else
    		printf("Escaleno");
	}
    



getch();
return 0;
}

