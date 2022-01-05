#include <stdio.h>
#include <conio.h>
int main(){
	float sal, desc=0;
	printf("Salario: ");
	scanf("%f", &sal);
	if (sal <= 600){
		desc = 0;
	} else if (sal > 600 && sal <=1200){
		desc = sal * 0.2;
	} else if (sal > 1200 && sal <=200){
		desc = sal * 0.25;
	} else if (sal > 2000){
		desc = sal * 0.3;
	}
	printf("Desconto do INSS: %.2f",desc);
	getch();
	return 0;
}

