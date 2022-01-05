#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int quant, num;
	num=9;
	quant=0;
	while(num<10 && num>=2){
		quant=quant+1;
		num=num-1;
	}	
	printf("A quantidade de núemeros é: %d\n",quant);
	system("Pause");
	return 0;
}

