/* Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados de um triângulo e, se
forem verificar se é um triângulo equilátero, isósceles ou escalenos. Se eles não formarem um triângulo,
escrever uma mensagem. Considere as seguintes propriedades:
O comprimento de cada lado em um triângulo é menor que a soma dos outros dois lados;
Equiláteros: tem os comprimentos dos três lados iguais;
Isósceles: tem os comprimentos de dois lados iguais;
Escaleno: tem os comprimentos dos três lados diferentes */

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

