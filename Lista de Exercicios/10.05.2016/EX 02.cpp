#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//ex 02

int main()
{
	setlocale(LC_ALL, "portuguese");
	int soma, num;
	num=1;
	soma=num;
	while(soma<10){
		num=num+1;
		soma=soma+num;
		printf("Soma: %d\n",soma);
	}	
	system("Pause");
	return 0;
}

