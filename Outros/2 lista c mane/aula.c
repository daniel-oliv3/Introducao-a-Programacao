#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a;
	int b;
    printf("Informe um número positivo: ");
    scanf("%f", &a);
    if(a<0){
    	printf("\nNúmero invalido!!\nInforme um número positivo: ");
    	scanf("%f", &a);
	}
    printf("\n1-Dobro\t2-Cubo\t3-Raiz Quadrada\t4-Quadrado\n5-Produto por 5");
    printf("\n\nInforme o número da operação a ser feita: ");
    scanf("%d", &b);
    if(a>0){	
    switch (b){
    	case 1:
    		printf("Dobro do número: %.2f", 2*a); break;
    	case 2:
    		printf("Cubo do número: %.2f", pow(a,3)); break;
    	case 3:
    		printf("Cubo do número: %.2f", sqrt(a)); break;
    	case 4:
    		printf("Quadrado do número: %.2f", a*a); break;
    	case 5:
    		printf("%.2f * 5: %.2f", a, a*5); break;
    }}else
    printf("Operação não pode ser concluída");
    	
	
	

getch();
return 0;


}

