#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	int quant, num;
	num=9; quant=0;
	while((num<10)&&(num>=12)){
		quant=quant+1;
		num=num-1;
	}
	printf("A quantidade de n�meros �: %d\n",quant);
	return 0;
}

