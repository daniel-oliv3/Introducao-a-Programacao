#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    int a;
    float s,x;
    printf("1-Escritu�rio\n2-Secret�rio\n3-Caixa\n4-Gerente\n5-Diretor");
	printf("\n\nDigite o c�digo de seu cargo: ");
	scanf("%d", &a);
	printf("\nInforme seu sal�rio atual: ");
	scanf("%f", &s);
	if(s>=0){
	switch(a){
	case 1:
		x=s*0.5;
		s=s+x;
		printf("Cargo:Escritu�rio\nAumento: %.2f\nNovo Sal�rio: %.2f", x,s);break;
	case 2:
		x=s*0.35;
		s=s+x;
		printf("Cargo:Secret�rio\nAumento: %.2f\nNovo Sal�rio: %.2f", x,s);break;
	case 3:
		x=s*0.2;
		s=s+x;
		printf("Cargo:Caixa\nAumento: %.2f\nNovo Sal�rio: %.2f", x,s);break;
	case 4:
		x=s*0.1;
		s=s+x;
		printf("Cargo:Gerente\nAumento: %.2f\nNovo Sal�rio: %.2f", x,s);break;
	case 5:
		printf("Cargo:Diretor\nSal�rio: %.2f\nN�o tem aumento", s);break;
	default:
		printf("Cargo Inexistente");break;
}
}else
	printf("Somente valores positivos");
	
getch();
return 0;

}

