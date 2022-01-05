#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a,b,c,m;
    printf("Informe as 3 notas:\n");
    scanf("%f%f%f", &a,&b,&c);
    if(a>=0 && a<=10 && b>=0 && b<=10 && c>0 && c<=10){
	m=(a+b+c)/3;
	if(m>=7 && m<=10)
		printf("Aluno Aprovado");
	else
	if(m>=5 && m<7){
		printf("Aluno vai para Exame Final");
		m=(12-m);
		printf("\nNota mínima necessária para ser aprovado: %.2f", m);
	}else
	if(m>=0 && m<5)
		printf("Aluno Reprovado");
	}else
		printf("Nota Inválidas");
getch();
return 0;

}

