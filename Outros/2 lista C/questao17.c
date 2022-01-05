/* Dados tr�s valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um tri�ngulo e, se
forem verificar se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles n�o formarem um tri�ngulo,
escrever uma mensagem. Considere as seguintes propriedades:
O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
Equil�teros: tem os comprimentos dos tr�s lados iguais;
Is�sceles: tem os comprimentos de dois lados iguais;
Escaleno: tem os comprimentos dos tr�s lados diferentes */

#include <stdio.h>
#include <conio.h>
int main(){
	float x,y,z;
	printf("Digite os lados do triangulo: ");
	scanf("%f %f %f",&x,&y,&z);
	if (x > y+z || y > x+z || z > x+y){
		if ( x == y == z) {
			printf("Os lados formam um triangulo equilatero");
		} else if (x == y || y == z || z == x){
			printf("Os lados formam um triangulo isoceles");	
		} else if (x != y != z){
			printf("Os lados formam um triangulo escaleno");
		}
	} else
		printf("Os lados nao formam um triangulo");
	getch();
	return 0;
}

