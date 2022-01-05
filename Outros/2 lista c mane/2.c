#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float P;
    int T;
    printf("Informe o percurso em KM: \n");
    scanf("%f", &P);
    printf(" Informe o número correspondente ao tipo de carro: \n");
    printf("Tipo 1\n");
    printf("Tipo 2\n");
    printf("Tipo 3\n");
    scanf("%d", &T);
    switch(T){
    case 1:
        P=P/12;
    	printf("CONSUMO ESTIMADO: %.2f Litro\(s)", P);
        break;
    case 2:
   		P=P/9;
		printf("CONSUMO ESTIMADO: %.2f Litro\(s)", P);
	case 3:
        P=P/12;
    	printf("CONSUMO ESTIMADO: %.2f Litro\(s)", P);
        break;
	}


getch ();
return 0;

}

