#include <conio.h> //Questão 3
#include <stdio.h>
#include <locale.h>

int main (){
	
	setlocale(LC_ALL,"ptb");
	
	int CONT1,CONT2;
	
	float A;
	
	A=0; CONT1=1;
	
	for(CONT2=1;CONT2<=25;CONT2++){
		
                                   A=A+(float)(CONT1/CONT2);
                                   
                                   CONT1+=2;
    }
    
    printf("\nO Resultado é:%.2f",A);
	                          
getch();

return(0);

}//É igual a 25
