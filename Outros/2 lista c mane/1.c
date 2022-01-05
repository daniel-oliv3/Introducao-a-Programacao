#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"ptb");
    float a,b,c,M;
    printf("Informe as 3 notas do aluno:\n");
    scanf("%f%f%f", &a,&b,&c);
    M= (a+b+c)/3;
    printf("MEDIA: %.2f", M);
    if(M>=7)
    printf("\tAPROVADO");
    else
    if(M<3 && M>=0)
    printf("\tREPROVADO");
    else
    if(M>=3 && M<7){
    	printf("\tPROVA FINAL");
	}else
		printf("\tVALOR INVALIDO!!!");

getch ();
return 0;

}
